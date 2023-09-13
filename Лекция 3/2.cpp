#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	int x;
	cin >> x;
	
	bool isEven;
	
	
	if ((x & 1) == 0)
	{
		isEven = (x & 1);
		cout << isEven << endl;
		cout << "Значение четное" << endl;
	}
	else
	{
		cout << "Значение нечетное" << endl;
	}

}