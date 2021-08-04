#pragma once
#include <string>
#include <iostream>
#include "Typedefs.hpp"

class GameEntry {
public:
	GameEntry(const std::string& n = "", score_t s = 0);
	std::string getName() const;
	score_t getScore() const;
private:
	std::string name;
	score_t score;
};

GameEntry::GameEntry(const std::string& n, score_t score) : name(n), score(score) { }

std::string GameEntry::getName() const
{
	return name;
}

score_t GameEntry::getScore() const
{
	return score;
}