#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    int A;
    cout << "enter num ";
    cin >> A;

    for (int i = 1; i <= A; ++i) {
        if (A % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}