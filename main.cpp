#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    cout << "enter two nums ";
    int num1, num2;
    cin >> num1 >> num2;

    int min_num = (num1 < num2) ? num1 : num2;
    min_num = (min_num < 0) ? -min_num : min_num;

    int max_num = (num1 > num2) ? num1 : num2;
    max_num = (max_num < 0) ? -max_num : max_num;

    cout << "numbers are divisible without remainder. ";
    for (int i = 1; i <= min_num; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            std::cout << i << " ";
        }
    }

    cout << endl;
    system("pause");
    return 0;
}