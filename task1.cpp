#include <iostream>
#include <windows.h>
using namespace std;


main()
{
    string fruit[4] = {"peach","apple","guava","watermalon"};
    int price[4] = {60,70,40,30};
    string ff;
    int quantity,total;

    cout<<"Enter name of the fruit : ";
    cin>>ff;
    cout<<"Enter the quantity required: ";
    cin>>quantity;

    int count = -1;
     
    for(int i=0; i<4; i++)
    {
        if(ff == fruit[i])
        {
            count = i;
        }
    }

    total = quantity*price[count];
    cout<<"Total price is "<<total;
}