#include "logic.h"

int main() {

	int a = 11;
	int b = 22;
	int c = 33;

	int* ptr_a = &a;
	int* ptr_b = &b;
	int* ptr_c = &c;

	cout << "Before: " << a << " " << b << " " << c << endl;

	string result = swap_values(ptr_a, ptr_b, ptr_c);

	cout << "After: " << result << endl;

	return 0;
}