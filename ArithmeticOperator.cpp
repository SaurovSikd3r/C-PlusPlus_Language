#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2;

    num1 = 20;
    num2 = 6;

    int sum = num1 + num2;
    cout<< "Sum is : " <<sum;
    cout<<endl;

    int sub = num1 - num2;
    cout<< "Substraction is : " <<sub;
    cout<<endl;

    int mul = num1 * num2;
    cout<< "Multiplication is : " <<mul;
    cout<<endl;

    int div = (float) num1 / num2; //Type casting
    cout<< "Division is : " <<div;
    cout<<endl;

    int rem = num1 / num2; //Type casting
    cout<< "Reminder is : " <<rem;
    cout<<endl;

    getch();
}
