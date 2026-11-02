#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
	if (b == 0) {
		cout << "Error: Division by zero!" << endl;
		return 0;
	}
	return a / b; }

void getInput(double& a, double& b) {
	cout << "Enter first number: ";
	while (!(cin >> a)) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid number. Enter first number: ";
	}
	cout << "Enter second number: ";
	while (!(cin >> b)) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid number. Enter second number: ";
	}
}

int main() {
	int choice;
	double a, b;

	do {
		cout << "Arithmetic Menu:" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			getInput(a, b);
			cout << "Result: " << add(a, b) << endl;
			break;
		case 2:
			getInput(a, b);
			cout << "Result: " << subtract(a, b) << endl;
			break;
		case 3:
			getInput(a, b);
			cout << "Result: " << multiply(a, b) << endl;
			break;
		case 4:
			getInput(a, b);
			cout << "Result: " << divide(a, b) << endl;
			break;
		case 5:
			cout << "Exiting the program." << endl;
			break;
		default:
			cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
		}
	} while (choice != 5);
}