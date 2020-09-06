#include <iostream>

using namespace std;

int main() {
	int x, y;	// Stores the user inputs.
	int sum;	// Stores the sum.

	// Prompt user for input:
		cout << "Enter a number: ";
	// Get first number x:
		cin >> x;
	// Prompt user for input:
		cout << "Enter a number: ";
	// Get second number y:
		cin >> y;
	// Add the two numbers and assign to sum:
		sum = x + y;
	// Display the sum:
		cout << "Sum of x" << x << " and y" << y << " is: " << sum << endl;	
	// End program.
		return 0;
}
