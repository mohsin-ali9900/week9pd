#include <iostream>
#include <windows.h>
using namespace std;


main()
{
    string movie[5] = {"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    int total = 0;
    string mmm;

    cout<<"Enter name of the movie : ";
    cin>>mmm;

     
    for(int i=0; i<4; i++)
    {
        if(mmm == movie[i])
        {
            if (i%2 == 0)
            {
                total = 500-50;
            }
            else
            {
                total = 500-25;
            }
            break;
        }
    }

    cout<<"Total is :"<<total;


}