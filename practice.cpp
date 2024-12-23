#include <iostream>
using namespace std;

const int SIZE = 10; 

void printArray(int arr[], int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


void deleteByIndex(int arr[], int& size) {
	int index;
	cout << "Enter the index of the element to delete: ";
	cin >> index;
	if (index < 0 || index >= size) {
		cout << "Invalid index\n";
		return;
	}
	for (int i = index; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}
	size--;
	cout << "Element deleted successfully\n";
}

void deleteByValue(int arr[], int& size) {
	int value, count = 0;
	cout << "Enter the value of the element to delete: ";
	cin >> value;
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			for (int j = i; j < size - 1; j++) {
				arr[j] = arr[j + 1];
			}
			size--;
			i--;
			count++;
		}
	}
	if (count == 0) {
		cout << "Element not found\n";
	}
	else {
		cout << "Element deleted successfully\n";
	}
}

void searchByIndex(int arr[], int size) {
	int index;
	cout << "Enter the index of the element to search: ";
	cin >> index;
	if (index < 0 || index >= size) {
		cout << "Invalid index\n";
		return;
	}
	cout << "Element at index " << index << " is " << arr[index] << endl;
}


void searchByValue(int arr[], int size) {
	int value, count = 0;
	cout << "Enter the value of the element to search: ";
	cin >> value;
	for (int i = 0; i < size; i++) {
		if (arr[i] == value) {
			cout << "Element " << value << " found at index " << i << endl;
			count++;
		}
	}
	if (count == 0) {
		cout << "Element not found\n";
	}
}

int main() {
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = SIZE;
	int choice;

	do {
		cout << "\nMain menu\n";
		cout << "1. Delete by index\n";
		cout << "2. Delete by value\n";
		cout << "3. Search by index\n";
		cout << "4. Search by value\n";
		cout << "5. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			deleteByIndex(arr, size);
			printArray(arr, size);
			break;
		case 2:
			deleteByValue(arr, size);
			printArray(arr, size);
			break;
		case 3:
			searchByIndex(arr, size);
			break;
		case 4:
			searchByValue(arr, size);
			break;
		case 5:
			cout << "Exiting program\n";
			break;
		default:
			cout << "Invalid choice\n";
			break;
		}
	} while (choice != 5);
	system("pause");
return 0;
}