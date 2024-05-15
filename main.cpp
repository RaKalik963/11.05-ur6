#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    cout << "enter num ";
    int A;
    cin >> A;

    int sum_of_digits = 0;
    for (; A != 0; sum_of_digits += A % 10, A /= 10);

    int cube_of_sum = sum_of_digits * sum_of_digits * sum_of_digits;

    int square_of_A = A * A;

    if (cube_of_sum == square_of_A) 
    {
        cout << "kub sum == kvadraty A" << endl;
    }
    else 
    {
        cout << "kub sum != kvadraty A" << endl;
    }
    system("pause");
    return 0;
}