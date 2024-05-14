#include <iostream>
#include <cmath>
#include <ctime>
#include <chrono>
using namespace std::chrono;
using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 500;
    cout << num << endl;
    auto start = high_resolution_clock::now();
    cout << "enter num to guess";
    int guess;
    cin >> guess;
    for (; guess <= 503;)
    {
        if (guess == num)
        {
            cout << "you guess num" << endl;
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
        }
        if (guess == 0)
        {
            cout << "guessed num = " << num << endl;
            system("pause");
            return 0;
        }
    }
    system("pause");
    return 0;
}