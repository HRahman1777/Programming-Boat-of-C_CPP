#include <iostream>

using namespace std;

int main()
{
    int temp, x, x2;
    double note;

    while (cin >> note)
    {

        temp = note;
        note = 100 * note;
        x2 = note;

        cout << "NOTAS:\n";
        cout << temp / 100 << " nota(s) de R$ 100.00\n";
        x = (temp % 100);
        cout << x / 50 << " nota(s) de R$ 50.00\n";
        x = (x % 50);
        cout << x / 20 << " nota(s) de R$ 20.00\n";
        x = (x % 20);
        cout << x / 10 << " nota(s) de R$ 10.00\n";
        x = (x % 10);
        cout << x / 5 << " nota(s) de R$ 5.00\n";
        x = (x % 5);
        cout << x / 2 << " nota(s) de R$ 2.00\n";
        x = (x % 2);
        cout << "MOEDAS:\n";
        cout << x / 1 << " moeda(s) de R$ 1.00\n";

        x2 = x2 % 100;
        cout << x2 / 50 << " moeda(s) de R$ 0.50\n";
        x2 = x2 % 50;
        cout << x2 / 25 << " moeda(s) de R$ 0.25\n";
        x2 = x2 % 25;
        cout << x2 / 10 << " moeda(s) de R$ 0.10\n";
        x2 = x2 % 10;
        cout << x2 / 5 << " moeda(s) de R$ 0.05\n";
        x2 = x2 % 5;
        cout << x2 / 1 << " moeda(s) de R$ 0.01\n";
    }

    return 0;
}
