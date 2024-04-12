#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <limits>
#include <sstream>
#include <random>


void printMessage(std::string message, bool newLine = false) {
	std::cout << message;
	if(newLine) {
		std::cout << std::endl;
	}
}

void helloWorld() {
	printMessage("Hello World of C++.");
}

std::vector<int> generateRandomNumbers(int amount) {
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

void printVector(std::vector<int> vector) {
	for (int i = 0; i < vector.size(); i++) {
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
}




int main()
{
	std::vector<int> randomNumbers = generateRandomNumbers(12);

	insertionSort(randomNumbers);
	std::cout << findSmallestNumber(randomNumbers) << std::endl;

	printVector(randomNumbers);

	helloWorld();
	printMessage("Hello Cpp. I always wanted to meet you. To day is the day!", true);
	

	return 0;
}