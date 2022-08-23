#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // declaring an array
    int marks[5];
    int i;

    //initializing an array
    marks[0] = 35;
    marks[1] = 45;
    marks[2] = 33;
    marks[3] = 83;
    marks[4] = 93;

    // printing an array
    for(i=0; i<5; i++)
    {
        cout << marks[i] << endl;
    }

    getch();
}
