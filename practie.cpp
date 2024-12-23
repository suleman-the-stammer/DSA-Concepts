#include <iostream>
#include <string>

using namespace std;

struct Marks {
	int roll_no;
	string name;
	int cp_marks;
	int oop_marks;
	int ict_marks;
	float percentage;
};


float calculatePercentage(int cp_marks, int oop_marks, int ict_marks) {
	return (cp_marks + oop_marks + ict_marks) / 3.0;
}


void swap(Marks& m1, Marks& m2) {
	Marks temp = m1;
	m1 = m2;
	m2 = temp;
}


void selectionSort(Marks marks[], int n) {
	int i, j, min_index;
	for (i = 0; i < n - 1; i++) {
		min_index = i;
		for (j = i + 1; j < n; j++) {
			if (marks[j].percentage < marks[min_index].percentage) {
				min_index = j;
			}
		}
		swap(marks[i], marks[min_index]);
	}
}

int main() {
	Marks marks[3];
	int i;

	for (i = 0; i < 3; i++) {
		cout << "Enter details for student " << i + 1 << ":" << endl;
		cout << "Roll no.: ";
		cin >> marks[i].roll_no;
		cout << "Name: ";
		cin >> marks[i].name;
		cout << "Computer Programming marks: ";
		cin >> marks[i].cp_marks;
		cout << "Object-Oriented Programming marks: ";
		cin >> marks[i].oop_marks;
		cout << "ICT marks: ";
		cin >> marks[i].ict_marks;
		marks[i].percentage = calculatePercentage(marks[i].cp_marks, marks[i].oop_marks, marks[i].ict_marks);
	}


	cout << "\nComplete information before sorting:" << endl;
	for (i = 0; i < 3; i++) {
		cout << marks[i].roll_no << "\t" << marks[i].name << "\t" << marks[i].cp_marks << "\t"
			<< marks[i].oop_marks << "\t" << marks[i].ict_marks << "\t" << marks[i].percentage << "%" << endl;
	}

	selectionSort(marks, 3);

	
	cout << "\nComplete information after sorting:" << endl;
	for (i = 0; i < 3; i++) {
		cout << marks[i].roll_no << "\t" << marks[i].name << "\t" << marks[i].cp_marks << "\t"
			<< marks[i].oop_marks << "\t" << marks[i].ict_marks << "\t" << marks[i].percentage << "%" << endl;
	}
	
	return 0;
}