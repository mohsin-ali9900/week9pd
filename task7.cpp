#include <iostream>
#include <windows.h>
using namespace std;

string check(char a,string name);
int count=0;
main()
{
    string name,name1;
    cout<<"Enter the first name : ";
    cin>>name;
    cout<<"Enter the Second name : ";
    cin>>name1;
    for (int i = 0; i < name.length(); i++)
    {
       name1 = check(name[i],name1);
    }
    
    cout<<"Common characters are :"<<count;
}

string check(char a,string name)
{

    for(int i =0; i<name.length() ; i++)
    {
        if(a==name[i]){
            cout << a<<endl;
            name[i]=' ';
            count++;
            break;
        }
    }
    return name;

}