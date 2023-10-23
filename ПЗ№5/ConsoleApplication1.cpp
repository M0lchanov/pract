#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    int a, b;
    char math_sign;

    cout << "Enter the operation sign" << endl;
    cin >> math_sign;

    switch (math_sign) {
    case '+': {
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
        cout << "Result" << endl;
        cout << Add(a, b);
        break;
    }
    case '-': {
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
        cout << "Result" << endl;
        cout << Sub(a, b);
        break;
    }
    case '*': {
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
        cout << "Result" << endl;
        cout << Mult(a, b);
        break;
    }
    case '/': {
        cout << "Enter first variable" << endl;
        cin >> a;
        cout << "Enter second variable" << endl;
        cin >> b;
        cout << "Result" << endl;
        cout << Div(a, b);
        break;
    }
    case '!': {
        cout << "Enter variable" << endl;
        cin >> a;
        cout << "Result" << endl;
        cout << Fact(a) << endl;
        break;
    }
    case '^': {
        cout << "Enter variable" << endl;
        cin >> a;
        cout << "Enter degree" << endl;
        cin >> b;
        cout << "Result" << endl;
        cout << Deg(a, b);
        break;
    }
    }
    return 0;
}