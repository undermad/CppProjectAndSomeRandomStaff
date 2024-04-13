#pragma once
#include <vector>
#include <iostream>
#include "Definition.h"


UTILITY_API std::vector<int> generateRandomNumbers(int size);

UTILITY_API void insertionSort(std::vector<int>& vector);

void swap(std::vector<int>& vector, int firstIndex, int secondIndex);

void helloWorld();

int findSmallestNumber(std::vector<int> vector);

template<typename T>
void printMessage(T message, bool newLine);

template<typename T>
void printVector(const std::vector<T>& vector);

#include "Utility.inl"
