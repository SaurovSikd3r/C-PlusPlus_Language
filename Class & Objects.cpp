#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;
};

int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK";
    book1.pages = 500;

    Book book2;
    book2.title = "X";
    book2.author = "Y";
    book2.pages = 200;

    cout << book2.pages;

    return 0;

}
