#pragma once
#include <memory>
#include "../include/GameEntry.hpp"

class Scores
{
public:
	Scores(int size = 4);
	void add(const GameEntry &entry);
	GameEntry remove(index_t index);
	void printEntries();

private:
	int maxEntries;
	index_t entries;
	std::unique_ptr<GameEntry[]> entriesList;
};
