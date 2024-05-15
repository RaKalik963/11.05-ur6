#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    cout << "enter num ";
    int num;
    cin >> num;

    cout << "numbers that are divisible without remainder " << num;
    for (int i = 1; i <= (num < 0 ? -num : num); ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    system("pause");
    return 0;
}