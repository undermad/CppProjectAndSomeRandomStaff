#pragma once
#include <vector>
#include <iostream>

// This function only read (We can add const key word)
template<typename T>
void printVector(const std::vector<T>& vector) {
	for (int i = 0; i < vector.size(); i++) {
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void printMessage(T message, bool newLine = false) {
	std::cout << message;
	if (newLine) {
		std::cout << std::endl;
	}
}