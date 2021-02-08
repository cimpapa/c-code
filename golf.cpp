#include <iostream>

const int Max = 5;

int main()
{
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores:\n";
    cout << "You must enter" << Max << "rounds\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
            continue;
            cout << "Please enter a number:\n";

        }
    }
    double total = 0.0;
    for (i = 0; i < Max; i++)
    {
        total += golf[i];
    }
    cout << "average score = " << total/Max << endl;
    cout << Max << " rounds";
    getchar();
    getchar();
    return 0;
}