#include <iostream>
#include <windows.h>
using namespace std;

main()
{
    string array[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter array : ";
        cin >> array[i];
    }

    int count = 0;

    for (int j = 0; j < 4; j++)
    {

        if (array[0] == array[j + 1])
        {
            count ++;
        }
    }
    if (count == 3)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
}