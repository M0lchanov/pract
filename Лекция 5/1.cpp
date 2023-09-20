#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int n = 1;
    int res = 1;
    while (n <= 10){
        res *= a;
        n++;
    }
    cout << res;
    return 0;
}
