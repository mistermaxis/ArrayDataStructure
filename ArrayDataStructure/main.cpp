#include "Scores.h"

int main()
{
	Scores scores;

	scores.add(GameEntry("John", 339));
	scores.add(GameEntry("Sam", 150));
	scores.add(GameEntry("Ian", 179));
	scores.add(GameEntry("Sandra", 255));
	scores.add(GameEntry("Max", 472));
	scores.add(GameEntry("Susan", 420));
	scores.add(GameEntry("Monica", 777));
	scores.add(GameEntry("Jane", 563));
	scores.add(GameEntry("Maria", 357));
	scores.add(GameEntry("Jessica", 159));
	scores.add(GameEntry("Michael", 852));
	scores.add(GameEntry("Jane", 349));
	scores.add(GameEntry("Lisa", 673));
	scores.add(GameEntry("Justin", 829));
	scores.add(GameEntry("Charles", 381));

	scores.printEntries();

	return 0;
}