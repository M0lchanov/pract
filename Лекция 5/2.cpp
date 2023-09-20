#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int res = 1;
    while (a <= 10){
        res *= a;
        a++;
    }
    cout << res;
    return 0;
}
