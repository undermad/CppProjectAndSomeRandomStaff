#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <limits>
#include <sstream>
#include <random>
#include "Utility.h"




void helloWorld() {
	printMessage("Hello World of C++.");

}
std::vector<int> generateRandomNumbers(int size) {
	std::vector<int> randomNumbers;
	std::srand(std::time(nullptr));

	for (int i = 0; i < 12; i++) {
		int number = std::rand() % 100;
		randomNumbers.push_back(number);
	}

	return randomNumbers;
}

void swap(std::vector<int>& vector, int firstIndex, int secondIndex) {
	int temp = vector[firstIndex];
	vector[firstIndex] = vector[secondIndex];
	vector[secondIndex] = temp;
}


void insertionSort(std::vector<int>& vector) {
	for (int i = 0; i < vector.size() - 1; i++) {

		for (int j = i + 1; j < vector.size(); j++) {
			if (vector[i] < vector[j]) {
				swap(vector, i, j);
			}
		}

	}
}

int findSmallestNumber(std::vector<int> vector) {
	int smallest = std::numeric_limits<int>::max();
	for (int num : vector) {
		if (num < smallest) {
			smallest = num;
		}
	}
	return smallest;
}




