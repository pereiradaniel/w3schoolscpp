#include <iostream>
using namespace std;
int main () {
	int x = 5;
	cout << "x = " << x << "/n";
	cout << "x += 3 result: " << (x += 3) << "/n";
	cout << "x -= 3 result: " << (x -= 3) << "/n";
	cout << "x *= 3 result: " << (x *= 3) << "/n";
	cout << "x /= 3 result: " << (x /= 3) << "/n";
	cout << "x %= 3 result: " << (x %= 3) << "/n";
	cout << "x &= 3 result: " << (x &= 3) << "/n";
	cout << "x |= 3 result: " << (x |= 3) << "/n";
	cout << "x ^= 3 result: " << (x ^= 3) << "/n";
	cout << "x >>= 3 result: " << (x >>= 3) << "/n";
	cout << "x <<= 3 result: " << (x <<= 3) << "/n";
	// End program:
	return 0;
}