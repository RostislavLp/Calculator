#pragma once
#include <vector>

bool ascending(int x, int y);

bool descending(int x, int y);

void selectionSort(std::vector<int>&, bool (*comparisonFcn)(int, int) = ascending);