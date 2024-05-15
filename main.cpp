#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    int count = 0;

    for (int i = 100; i <= 999; ++i) {
        int hund = i / 100;
        int ten = (i / 10) % 10;
        int one = i % 10;

        if (hund != ten && hund != one && ten != one)
        {
            ++count;
        }
    }

    cout << "count of numbers with diferent num " << count << endl;
    system("pause");
    return 0;
}