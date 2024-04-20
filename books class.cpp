#include <iostream>

using namespace std;

class Books{
public:
    string bookName;
    string bookAuthor;
    double price;
    int year;
    int pages;

    void setName(string tempName){
        cout << "Enter Book Name: ";
        getline(cin, tempName);
    bookName=tempName;
    }
    };

int main()
{
    Books b1;
    string tempName;

    b1.setName(tempName);

    cout << "Enter book author: ";
    getline (cin, b1.bookAuthor);
    cout << "Enter the year in which book was released: ";
    cin >> b1.year;
    cin.ignore();
    cout << "Enter the pages of book: ";
    cin >> b1.pages;
    cin.ignore();
    cout << "Enter the price of book: ";
    cin >> b1.price;
    cin.ignore();
    cout <<endl;
    cout << "Book Data: " <<endl;

    cout << "Name: " <<b1.bookName <<endl;
    cout << "Author: " <<b1.bookAuthor <<endl;
    cout << "Pages: " <<b1.pages <<endl;
    cout << "Release Year: " <<b1.year <<endl;
    cout << "Price: Rs " <<b1.price <<endl;

    return 0;
}
