#include <iostream>
#include <windows.h>
using namespace std;

main()
{
    int pin[0],idx =4;

    for(int i=0; i<idx;i++)
    {
        cout<<"Enter Pin";
        cin>>pin[i];
    }

    
    
    if((pin.length() == 4) && (pin >=0 && (pin) <= (9999)))
    {
        string moves[10] = {"Shimmy","shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};

    cout<<moves[pin[0]]<<" / "<<moves[(pin[1]+1)%10]<<" / "<<moves[(pin[2]+2)%10]<<" / "<<moves[(pin[3]+3)%10];

    }
    else{
        cout<<"Envalid Number";
    }
    

    
}