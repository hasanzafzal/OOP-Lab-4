#include <iostream>
using namespace std;

class alpha {
    int num1;
    int num2;
public:
    void input()
    {
        cout << "Enter the first value = ";
        cin >> num1;
        cout << "Enter the second value = ";
        cin >> num2;
    }
    friend double sum(alpha a);
    friend double sub(alpha a);
    friend double mul(alpha a);
    friend double div(alpha a);
};

double sum(alpha a)
{
    return (a.num1 + a.num2);
}

double sub(alpha a)
{
    return (a.num1 - a.num2);
}

double mul(alpha a)
{
    return (a.num1 * a.num2);
}

double div(alpha a)
{
    return (a.num1 / a.num2);
}

int main() {
    alpha a;
    a.input();
    cout << "Sum is = " << sum(a) << endl;
    cout << "Sub is = " << sub(a) << endl;
    cout << "Prod is = " << mul(a) << endl;
    cout << "Div is = " << div(a) << endl;
    return 0;
}