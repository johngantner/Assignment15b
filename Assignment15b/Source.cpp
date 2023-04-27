
// John Gantner
// 4/27/2023
// C++ Software Development

using namespace std;

template <typename T>// Creating the primary template
T half(T x) {
	return x / 2;
}

template <>
float half<float>(float x) {
	return x / 2.0f;
}

template <>
double half<double>(double x) {
	return x / 2.0f;
}

template <>
int half<int>(int x) {
	return x / 2 + (x % 2 == 1 ? 1 : 0);
}
