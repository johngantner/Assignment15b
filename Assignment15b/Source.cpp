
// John Gantner
// 4/27/2023
// C++ Software Development

#include <iostream>
using namespace std;

template <typename T>// Creating the primary template
T half(T x) {
	return x / 2;
}

template <>
float half<float>(float x) { // Float template
	return x / 2.0f;
}

template <>
double half<double>(double x) { // Double template
	return x / 2.0f;
}

template <>
int half<int>(int x) { // Int template
	return x / 2 + (x % 2 == 1 ? 1 : 0);
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	// Testing templated half function
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}