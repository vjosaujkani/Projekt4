#include <iostream>
#include <cmath>
using namespace std;

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
}
