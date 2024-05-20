#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    cout << "enter num ";
    int A;
    cin >> A;

    cout << "result= ";
    for (int B = 1; B <= A; ++B) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << " ";
        }
    }

    cout << endl;
    system("pause");
    return 0;
}