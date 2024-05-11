#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

#define dollar_hrn = 39.58
#define euro_hrn = 42.7
#define dollar_euro = 0.93
#define euro_dollar = 1.08
#define hrn_dollar = 0.025
#define hrn_euro = 0.023
int main()
{
    cout << "choise conversion \n";
    cout << "1 = dollar_hrn = 39.58 \n";
    cout << "2 = euro_hrn = 42.7 \n";
    cout << "3 = hrn_euro = 0.023 \n";
    cout << "4 = hrn_dollar = 0.025 \n";
    cout << "5 = euro_dollar = 1.08\n";
    cout << "6 = dollar_euro = 0.93\n";
    cout << "7 = exit" << endl;

    cout << "your choise ";
    int choise;
    cin >> choise;
    for (; choise <= 7;)
    {
        if (choise == 1)
        {
            cout << "enter sum ";
            int dollar1;
            cin >> dollar1;
        }
        else if (choise == 2)
        {
            cout << "enter sum ";
            int euro1;
            cin >> euro1;
        }
        else if (choise == 3)
        {
            cout << "enter sum ";
            int hrn1;
            cin >> hrn1;
        }
        else if (choise == 4)
        {
            cout << "enter sum ";
            int hrn2;
            cin >> hrn2;
        }
        else if (choise == 5)
        {
            cout << "enter sum ";
            int dollar;
            cin >> dollar;
        }
        else if (choise == 6)
        {
            cout << "enter sum ";
            int dollar;
            cin >> dollar;
        }
        else
            cout << "error" << endl;
    }
    system("pause");
    return 0;
}