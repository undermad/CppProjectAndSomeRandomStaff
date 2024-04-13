#include "Utility.h"
#include <vector>

int main()
{
	std::vector<int> ints = generateRandomNumbers(20);
	insertionSort(ints);
	printVector(ints);

	return 0;
} 