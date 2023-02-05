#include <iostream>
#include <windows.h>
using namespace std;

string check(char a, string name);
int count = 0;
main()
{
    int idx;
    cout << "Enetr no of colours : ";
    cin >> idx;
    if (idx > 0)
    {
    string cols[idx];
    int count = 0, total;
    int counter = 0;

    for (int i = 0; i < idx; i++)
    {
        cout << "colurs : ";
        cin >> cols[i];
        count++;
    }

    for (int j = 0; j < idx; j++)
    {
        if (cols[j] == cols[j+1])
        {
            counter++;
        }
    }

    total = (1 * (count - 1)) + (2 * count)-counter;

    cout << "Toatal time taken : " << total;
    }
    else
    {
        cout<<"Invalid Number ";
    }
}