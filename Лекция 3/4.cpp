#include <iostream>
#define cube(X) X*X*X

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	int a;
	cin >> a;
	
	cout << "Куб числа = " << cube(a) << endl;
	
	return 0;
}