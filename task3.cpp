#include <iostream>
#include <windows.h>
using namespace std;


main()
{
    string word;

    cout<<"Enter any string : ";
    cin>>word;
    int count =0;

    for(int i=0; word[i] != '\0'; i++ )
    {
        count++;
    }
    if (count % 2 == 0)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }

}