#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    int count = 0;

    for (int i = 100; i <= 999; ++i) {
        int hundr = i / 100;
        int ten = (i / 10) % 10;
        int ones = i % 10;

        if (hundr != ten && hundr != ones && ten != ones)
        {
            ++count;
        }
    }

    cout << "count of numbers with diferent number " << count << endl;
    system("pause");
    return 0;
}