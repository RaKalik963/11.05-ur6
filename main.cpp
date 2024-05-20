#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    cout << "Enter first num ";
    int A;
    cin >> A;
    cout << "Enter seccond num ";
    int B;
    cin >> B;

    for (int i = 1; i <= A && i <= B; ++i) {
        if (A % i == 0 && B % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}