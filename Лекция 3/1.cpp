#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cin >> x;
	
	bool powerOf2;
	
	
	if ((x & (x - 1)) == 0)
	{
		powerOf2 = (x & (x - 1));
		cout << powerOf2 << endl;
		cout << "Значение является степенью числа 2" << endl;
	}
	else
	{
		cout <<"Значение не является степенью числа 2" << endl;
	}

}