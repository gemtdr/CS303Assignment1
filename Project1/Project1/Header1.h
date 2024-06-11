#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

int returnIndex(int arr[], int numToCheck);

void modifyInt(int*& arr, int index, int result, int size);

void addInt(int*& arr, int numToAdd, int& size);

void deleteInt(int*& arr, int indexToDelete, int& size);





#pragma once
