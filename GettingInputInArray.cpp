
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // declaring an array

    int marks[5];
    int x;

    //initializing an array
    marks[0] = 35;
    marks[1] = 45;
    marks[2] = 33;
    marks[3] = 83;
    marks[4] = 93;
   for(x=0; x<5; x++)
   {
       cout << "Marks for student " << x+1 << " = ";
       cin >> marks[x];
   }

    // printing an array
    for(x=0; x<5; x++)
    {
        cout << marks[x] << endl;
    }
    getch();
}
