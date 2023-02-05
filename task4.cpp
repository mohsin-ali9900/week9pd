#include <iostream>
#include <windows.h>
using namespace std;


main()
{
    int idx;

    cout<<"Enter the length of array : ";
    cin>>idx;
    int array[idx];

    for(int i = 0; i<idx; i++)
    {
        cout<<"Enter array of numbers : ";
        cin>>array[i];
    }
    bool check = false;
    for(int i = 0; i<idx; i++)
    {
        if(array[i] == 7)
        {
            check = true;
            break;
        }

    }
    if(check == true)
    {
        cout<<"BOOM!!!";
    }
    else
    {
        cout<<"Number 7 does not exist..";
    }

}