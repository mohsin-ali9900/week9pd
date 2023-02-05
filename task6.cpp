#include <iostream>
#include <windows.h>
using namespace std;

main()
{
    int transfer;
    cout<<"Enter transformation number : ";
    cin>>transfer;

    int array[3];

    for(int i=0; i<3; i++)
    {
        cout<<"Enter number : ";
        cin>>array[i];
        if(array[i]%2 == 0)
        {
            array[i] = array[i] -(2*transfer);
        }
        else
        {
            array[i] = array[i] + (2*transfer);
        }
    }

    cout<<array[0]<<" "<<array[1]<<" "<<array[2];

}