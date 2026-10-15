#include <iostream›
#include <string> using namespace std;
class Book {
private:
float price;
protected:
string bookName;
public:
int bookID;
Book(int id, string name,
†loat p)
bookID = id;
bookName = name;
price = p;
void displayDetails() cout << "Book ID:
<< bookID
<< endl;
cout << Book Name:
<<
bookName << endl;
cout << "Price: "
< price <<
endl;
int main() {
Book b1(101, "C++ Programming",
450.0):
b1.displayDetails():
return 0;
}