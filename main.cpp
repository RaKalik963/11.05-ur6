#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double dolar_hrn = 39.58;
double euro_hrn = 42.7;
double dolar_euro = 0.93;
double euro_dolar = 1.08;
double hrn_dolar = 0.025;
double hrn_euro = 0.023;
int main()
{
    cout << "choise conversion \n";
    cout << "1 = dolar_hrn = 39.58 \n";
    cout << "2 = euro_hrn = 42.7 \n";
    cout << "3 = hrn_euro = 0.023 \n";
    cout << "4 = hrn_dolar = 0.025 \n";
    cout << "5 = euro_dolar = 1.08\n";
    cout << "6 = dolar_euro = 0.93\n";
    cout << "7 = exit" << endl;

    cout << "your choise ";
    int choise;
    cin >> choise;
    for (; choise <= 7;)
    {
        if (choise == 1)
        {
            cout << "enter sum ";
            int sum1;
            cin >> sum1;
            double conv1 = (dolar_hrn * sum1);
            cout << "dolar --> hrn = " << conv1 << endl;
        }
        if (choise == 2)
        {
            cout << "enter sum ";
            int sum2;
            cin >> sum2;
            double conv2 = (dolar_hrn * sum2);
            cout << "euro --> hrn = " << conv2 << endl;
        }
        if (choise == 3)
        {
            cout << "enter sum ";
            int sum3;
            cin >> sum3;
            double conv3 = (dolar_hrn * sum3);
            cout << "hrn --> euro = " << conv3 << endl;
        }
        if (choise == 4)
        {
            cout << "enter sum ";
            int sum4;
            cin >> sum4;
            double conv1 = (dolar_hrn * sum4);
            cout << "dolar --> hrn = " << conv1 << endl;
        }
        if (choise == 5)
        {
            cout << "enter sum ";
            int sum5;
            cin >> sum5;
            double conv1 = (dolar_hrn * sum5);
            cout << "dolar --> hrn = " << conv1 << endl;
        }
        if (choise == 6)
        {
            cout << "enter sum ";
            int sum6;
            cin >> sum6;
            double conv1 = (dolar_hrn * sum6);
            cout << "dolar --> hrn = " << conv1 << endl;
        }
        if (choise == 0)
        {
            break;
        }
        
    }
    system("pause");
    return 0;
}