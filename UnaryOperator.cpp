// Unary Operator -> + (unary plus), - (unary minus), ++ , --
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int x = 5;

    int result = -x;
    cout << -x << endl;
    cout << x++ << endl;  //postfix increment
    cout << ++x << endl;  //prefix increment
    cout << x-- << endl;
    cout << --x << endl;

    cout<<result;

    getch();
}
