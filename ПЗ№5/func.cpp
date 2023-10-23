#include "func.h"
int Add(int a, int b) {
	int result = a + b;
	return result;
};
int Sub(int a, int b) {
	int result = a - b;
	return result;
};
int Mult(int a, int b) {
	int result = a * b;
	return result;
};
int Div(int a, int b) {
	int result = a / b;
	return result;
};
int Fact(int a) {
		int result = 1;
		for (int i = 1; i <= a; i++)
		{
			result *= i;
		}
		return result;
};
int Deg(int a, int b) {
	int result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
};