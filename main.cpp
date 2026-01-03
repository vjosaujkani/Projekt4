#include <iostream>
#include <cmath>
using namespace std;

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