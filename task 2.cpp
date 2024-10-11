#include <iostream>
using namespace std;

class Factorial {
public:
    int num;
    void setNum(int n) {
        num = n;
    }

    friend int calculateFactorial(Factorial& f);
};

int calculateFactorial(Factorial& f) {
    int factorial = 1;
    for (int i = 1; i <= f.num; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    Factorial f;
    int result;
    cout << "Enter the number = ";
    cin >> f.num;
    result = calculateFactorial(f);
    cout << "Factorial = " << result << endl;
    return 0;
}