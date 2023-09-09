#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    
    int c_deg, f_deg;

    cin >> c_deg;

    f_deg = (( c_deg * 9 ) / 5) + 32;

    cout << f_deg << endl;

    return 0;
}
