#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    float num1, num2;

    cout<<"Enter 2 numbers : ";
    cin>> num1>>num2;

    cout<<showpoint; //ফলাফলের পূর্বে দশমিক দেখাতে
    cout<<fixed; //দশমিকের পরে স্পেসিফিক  ঘরগুলো কাউন্ট করবে
    cout<<setprecision(2); //ফলাফলের পরে বেশি দশমিক দেখাতে

    float sum = num1 + num2;
    cout<<setw(20)<< "Sum is : " <<sum; //সুন্দর করে ফরমেটের জন্য setw
    cout<<endl;

    cout<<noshowpoint;// যে ফলাফলের পূর্বে দশমিক দেখাতে না চান তাহলে
    float sub = num1 - num2;
    cout<< setw(20)<< "Substraction is : " <<sub;
    cout<<endl;

    float mul = num1 * num2;
    cout<< setw(20)<< "Multiplication is : " <<mul;
    cout<<endl;

    float div = (float) num1 / num2; //Type casting
    cout<< setw(20)<< "Division is : " <<div;
    cout<<endl;

    /*float rem = num1 / num2;
    cout<< "Reminder is : " <<rem;
    cout<<endl;*/

    getch();
}

