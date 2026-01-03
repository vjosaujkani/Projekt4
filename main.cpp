#include <iostream>
#include <cmath>
using namespace std;

void addition() {
double a, b;
cout << "Enter two numbers: ";
cin >> a >> b;
cout << "Result: " << a + b << endl;
}
void subtraction() {
double a, b;
cout << "Enter two numbers: ";
cin >> a >> b;
cout << "Result: " << a - b << endl;
}

void multiplication() {
double a, b;
cout << "Enter two numbers: ";
cin >> a >> b;
cout << "Result: " << a * b << endl;
}
void division() {
double a, b;
cout << "Enter two numbers: ";
cin >> a >> b;
if (b == 0) {
cout << "Error: Division by zero!" << endl;
} else {
cout << "Result: " << a / b << endl;
}
}

void power() {

double a, b;
cout << "Enter base and exponent: ";
cin >> a >> b;
cout << "Result: " << pow(a, b) << endl;
}
void squareRoot() {
double a;
cout << "Enter number: ";
cin >> a;
if (a < 0) {

cout << "Error: Cannot calculate square root of negative number!" << endl;
} else {
cout << "Result: " << sqrt(a) << endl;
}
}

int main(){
int choice
do {
cout << "\n=== TEAM CALCULATOR ===\n";
cout << "1. Addition\n";
cout << "2. Subtraction\n";
cout << "3. Multiplication\n";
cout << "4. Division\n";
cout << "5. Power\n";
cout << "6. Square Root\n";
cout << "0. Exit\n";
cout << "Choose an option: ";
cin >> choice;
switch (choice) {
case 1: addition(); break;
case 2: subtraction(); break;
case 3: multiplication(); break;
case 4: division(); break;
case 5: power(); break;
case 6: squareRoot(); break;
case 0: cout << "Goodbye!" << endl; break;
default: cout << "Invalid choice!" << endl;
}
} while (choice != 0);
return 0;
}
