#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <limits>
#include <sstream>
#include <random>

int main()
{


	std::vector<int> randomNumbers;

	std::srand(std::time(nullptr));


	for (int i = 0; i < 12; i++) {
		int number = std::rand() % 100;
		randomNumbers.push_back(number);

		std::cout << number << " " << std::endl;
	}

	int smallest = std::numeric_limits<int>::max();
	for (int num : randomNumbers) {
		if (num < smallest) {
			smallest = num;
		}
	}


	// bubble sort
	for (int i = 0; i < randomNumbers.size() - 1; i++) {

		for (int j = i + 1; j < randomNumbers.size(); j++) {
			if (randomNumbers[i] < randomNumbers[j]) {
				int temp = randomNumbers[i];
				randomNumbers[i] = randomNumbers[j];
				randomNumbers[j] = temp;
			}
		}

	}

	for (int i = 0; i < randomNumbers.size(); i++) {
		std::cout << randomNumbers[i] << " ";
	}
	std::cout << std::endl;



	return 0;
}