#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    cout << "enter num ";
    string number;
    cin >> number;

    string result;
    for (int i = 0; i < number.size(); ++i) {
        if (number[i] != '3' && number[i] != '6') {
            result += number[i];
        }
    }

    cout << "result " << result << endl;
    system("pause");
    return 0;
}