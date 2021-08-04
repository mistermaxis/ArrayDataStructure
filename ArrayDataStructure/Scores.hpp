#pragma once
#include <memory>
#include "GameEntry.hpp"

class Scores
{
public:
	Scores(size_t size = 10);
	void add(const GameEntry &entry);
	GameEntry remove(index_t index) {}
	void printEntries();

private:
	size_t maxEntries;
	index_t entries;
	std::unique_ptr<GameEntry[]> entriesList;
};

Scores::Scores(size_t size)
{
	maxEntries = size;
	entriesList = std::make_unique<GameEntry[]>(maxEntries);
	entries = 0;
}

void Scores::add(const GameEntry &entry)
{
	if (entries == 0)
	{

		entriesList[entries] = entry;
		entries++;
	}
	else
	{
		if (entries <= maxEntries)
		{

			if (entry.getScore() > entriesList[entries - 1].getScore())
			{
				int i;
				for (i = entries - 1; entry.getScore() > entriesList[i].getScore() && i >= 0; i--)
				{
					if ((i + 1) != maxEntries)
					{
						entriesList[i + 1] = entriesList[i];
					}
				}
				entriesList[i + 1] = entry;
				if (entries < maxEntries)
				{
					entries++;
				}
			}
		}
	}
}

void Scores::printEntries()
{
	for (int i = 0; i < entries; i++)
	{
		std::cout << "Name: " << entriesList[i].getName() << "\nScore: "
				  << entriesList[i].getScore() << "\n";
	}
}