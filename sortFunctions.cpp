#include "sortFunctions.h"

bool ascending(int x, int y)
{
    return x > y;
}

bool descending(int x, int y)
{
    return x < y;
}

void selectionSort(std::vector<int>& vec, bool (*comparisonFcn)(int, int))
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (/*vec[j] < vec[min_index]*/comparisonFcn(vec[j], vec[min_index]))
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            std::swap(vec[i], vec[min_index]);
        }
    }
}
