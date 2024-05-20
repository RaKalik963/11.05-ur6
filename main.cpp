#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    int num;
    cout << "enter num ";
    cin >> num;

    int result = 0;
    int multiplier = 1;

    for (int temp = num; temp != 0; temp /= 10) {
        int digit = temp % 10;
        if (digit != 3 && digit != 6) {
            result += digit * multiplier;
            multiplier *= 10;
        }
    }

    cout << "number without 3 and 6 ==== " << result << endl;
    system("pause");
    return 0;
}