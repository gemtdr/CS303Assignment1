#include "Header1.h"

int returnIndex(int arr[], int numToCheck, int size) { //don't have to pass by reference because we aren't updating

	

	for (int i = 0; i < size + 1; i++) {

		if (arr[i] == numToCheck) { //if value and target number are equal
			return i; 
		}
	}
	return -1;
}

void modifyInt(int*& arr, int index, int result, int size) { //pass by reference for the following functions because we are updating array

	for (int i = 0; i < size; i++) {

		if (arr[i] == index + 1) {
			cout << "The value at index " << index << " was " << arr[i];
			arr[i] = result;
			cout << " and is now " << arr[i];
		}

	}
}

void addInt(int*& arr, int numToAdd, int& size) {

	int* newArr = new int[size + 1]; //create a new array with +1 capacity


	for (int i = 0; i < size; ++i) { //copy original onto new array
		newArr[i] = arr[i];
	}


	newArr[size] = numToAdd; //assign desired number to the last index


	++size; //increase the size variable in main

	delete[] arr; //delete old array and reserve space for new
	arr = newArr;
}

void deleteInt(int*& arr, int indexToDelete, int& size) {

	for (int i = indexToDelete; i < size - 1; ++i) { //push elements to the left and decrease size
		arr[i] = arr[i + 1];
	}

	--size;


}
