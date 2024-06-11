#include "Header1.h"

int returnIndex(int arr[], int numToCheck) {

	int numElements = 100;

	for (int i = 0; i < numElements; i++) {

		if (arr[i] == numToCheck) {
			return arr[i] - 1;
		}
	}
	return -1;
}

void modifyInt(int*& arr, int index, int result, int size) {

	for (int i = 0; i < size; i++) {

		if (arr[i] == index + 1) {
			cout << "The value at index " << index << " was " << arr[i];
			arr[i] = result;
			cout << " and is now " << arr[i];
		}

	}
}

void addInt(int*& arr, int numToAdd, int& size) {

	int* newArr = new int[size + 1];


	for (int i = 0; i < size; ++i) {
		newArr[i] = arr[i];
	}


	newArr[size] = numToAdd;


	++size;

	delete[] arr;
	arr = newArr;
}

void deleteInt(int*& arr, int indexToDelete, int& size) {

	for (int i = indexToDelete; i < size - 1; ++i) {
		arr[i] = arr[i + 1];
	}

	--size;


}
