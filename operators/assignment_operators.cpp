#include <iostream>
using namespace std;
int main () {
	int x = 5;
	cout << "x = " << x << endl;
	cout << "x += 3 result: " << (x += 3) << endl;
	cout << "x -= 3 result: " << (x -= 3) << endl;
	cout << "x *= 3 result: " << (x *= 3) << endl;
	cout << "x /= 3 result: " << (x /= 3) << endl;
	cout << "x %= 3 result: " << (x %= 3) << endl;
	cout << "x &= 3 result: " << (x &= 3) << endl;
	cout << "x |= 3 result: " << (x |= 3) << endl;
	cout << "x ^= 3 result: " << (x ^= 3) << endl;
	cout << "x >>= 3 result: " << (x >>= 3) << endl;
	cout << "x <<= 3 result: " << (x <<= 3) << endl;
	// End program:
	return 0;
}