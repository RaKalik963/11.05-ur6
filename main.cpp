#include <iostream>
#include <cmath>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <vector>
using namespace std::chrono;
using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 500;
    cout << num << endl;
    cout << "enter num to guess";
    int guess;
    cin >> guess;
    auto start = high_resolution_clock::now();
    int atempt = 1;
    for (; guess <= 503;)
    {
        if (guess == num)
        {
            cout << "you guess num" << endl;
            cout << "count of atempt = " << atempt << endl;
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<seconds>(stop - start);
            cout << "Time taken by function: "
                << duration.count() << " seconds" << endl;
            system("pause");
            return 0;
        }
        if (guess != num)
        {
            cout << "your num not equal guessed num" << endl;
            cout << "enter num to guess";
            cin >> guess;
            atempt += 1;
        }
        if (guess == 0)
        {
            cout << "guessed num = " << num << endl;
            cout << "count of atempt = " << atempt << endl;
            system("pause");
            return 0;
        }
    }
    system("pause");
    return 0;
}