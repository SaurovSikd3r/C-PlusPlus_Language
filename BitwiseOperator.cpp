// Bitwise Operator -> & (and), | (or), ^ (exor), >> (right shift) , << (left shift), ~ (not)
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int a = 32;
  int b = 12;
  int c;

  c = a & b;
  cout << "a & b = " << c<<endl;

  c = a | b;
  cout << "a | b = " << c<<endl;

  c = a ^ b;
  cout << "a ^ b = " << c<<endl;

// 2 times divided by 2
  c = a >> 2;
  cout << "a >> 2 = " << c<<endl;

// 3 times divided by 2
  c = a >> 3;
  cout << "a >> 3 = " << c<<endl;


  c = a << 2;
  cout << "a << 2 = " << c<<endl;


    getch();
}
