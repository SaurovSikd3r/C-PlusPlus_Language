#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    Book (string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main()
{
    Book book1("Harry Potter", "JK", 500);
    Book book2("X", "Y", 200);

    cout << book2.title;

    return 0;

}
