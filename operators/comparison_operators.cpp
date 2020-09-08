#include <iostream>
using namespace std;
int main () {
	int x = 5, y = 3;
	cout << "x = " << x << ", y = " << y << "\n";
	cout << "x==y result: " << (x==y) << "\n";
	(x==y) ? cout << "x is equal to y\n" : cout << "x is not equal to y\n";
	cout << "x!=y result: " << (x!=y) << "\n";
	(x!=y) ? cout << "x is not equal to y\n" : cout << "x is equal to y\n";
	cout << "x>y result: " << (x>y) << "\n";
	(x>y) ? cout << "x greater than y\n" : cout << "x is not greater than y\n";
	cout << "x<y result: " << (x<y) << "\n";
	(x<y) ? cout << "x is less than y\n" : cout << "x is greater than y\n";
	cout << "x>=y result: " << (x>=y) << "\n";
	(x>=y) ? cout << "x is greater than or equal to y\n" : cout << "x is not greater than or equal to y\n";
	cout << "x<=y result: " << (x<=y) << "\n";
	(x<=y) ? cout << "x is less than or equal to y\n" : cout << "x is not less than or equal to y\n";
	// End program:
	return 0;
}