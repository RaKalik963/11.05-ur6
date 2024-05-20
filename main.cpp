#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    cout << "enter num ";
    int A;
    cin >> A;

    int sum = 0;
    for (int temp = A; temp != 0; temp /= 10) {
        sum += temp % 10;
    }

    int cubeSum = sum * sum * sum;
    int squareA = A * A;

    if (cubeSum == squareA) {
        cout << "sum^3 == A^2" << endl;
    }
    else {
        cout << "sum^3 != A^2" << endl;
    }
    return 0;
}