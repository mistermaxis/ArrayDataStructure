#include "Scores.hpp"

int main()
{
	Scores scores;

	scores.add(GameEntry("John", 339U));
	scores.add(GameEntry("Sam", 150U));
	scores.add(GameEntry("Ian", 179U));
	scores.add(GameEntry("Sandra", 255U));
	scores.add(GameEntry("Max", 472U));
	scores.add(GameEntry("Susan", 420U));
	scores.add(GameEntry("Monica", 777U));
	scores.add(GameEntry("Jane", 563U));
	scores.add(GameEntry("Maria", 357U));
	scores.add(GameEntry("Jessica", 159U));
	scores.add(GameEntry("Michael", 852U));
	scores.add(GameEntry("Jane", 349U));
	scores.add(GameEntry("Lisa", 673U));
	scores.add(GameEntry("Justin", 829U));
	scores.add(GameEntry("Charles", 381Ugi));

	scores.printEntries();

	return 0;
}