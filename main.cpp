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
    int temp = A;
    for (int B = 1; B * B <= A; ++B) {
        if (A % (B * B) == 0) {
            cout << "kub sum == kvadraty A" << endl;
            system("pause");
        }
        else if (A % (B * B * B) != 0)
        {
            cout << "kub sum != kvadraty A" << endl;
            system("pause");
        }
        else
            cout << "error" << endl;
    }

    
    system("pause");
    return 0;
}