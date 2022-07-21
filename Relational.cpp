#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    /*int number;

    cout << "Enter an integer : ";
    cin>>number;

    if(number%2==0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }*/

    int mark;

    cout<<"Enter your marks : ";
    cin>> mark;

    if(mark>=33)
    {
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }

    getch();
}

