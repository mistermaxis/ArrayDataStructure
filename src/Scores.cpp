#include <memory>
#include "../include/Scores.hpp"

Scores::Scores(int size)
{
	maxEntries = size;
	entriesList = std::make_unique<GameEntry[]>(maxEntries);
	entries = 0;
}

void Scores::add(const GameEntry &entry)
{
	int index, previous;
	for (index = entries, previous = index - 1; entry.getScore() > entriesList[previous].getScore() && index > 0; index--, previous--)
	{
		if (index != maxEntries) {
			entriesList[index] = entriesList[previous];
		}
	}

	if (index < maxEntries) {
		entriesList[index] = entry;
	}

	if (entries < maxEntries) {
		entries++;
	}
}

GameEntry Scores::remove(index_t index)
{
	return GameEntry("John", 0);
}

void Scores::printEntries()
{
	for (int i = 0; i < entries; i++)
	{
		std::cout << "Name: " << entriesList[i].getName() << "\nScore: "
				  << entriesList[i].getScore() << "\n";
	}
}