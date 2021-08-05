#include "../include/GameEntry.hpp"

GameEntry::GameEntry(const std::string& n, score_t score) : name(n), score(score) { }

std::string GameEntry::getName() const
{
	return name;
}

score_t GameEntry::getScore() const
{
	return score;
}