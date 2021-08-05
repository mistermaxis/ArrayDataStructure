#pragma once
#include <memory>
#include "../include/GameEntry.hpp"

class Scores
{
public:
	Scores(size_t size = 10);
	void add(const GameEntry &entry);
	GameEntry remove(index_t index) { return GameEntry("John", 0); }
	void printEntries();

private:
	size_t maxEntries;
	index_t entries;
	std::unique_ptr<GameEntry[]> entriesList;
};
