#include<iostream>
using namespace std;
class Media
{
string title;
float price;
public:
void read()
{
cout << "Enter title" << endl;
cin >> title;
cout << "Enter price" << endl;
cin >> price;
}
void display()
{
cout << "Title:" << title << endl << "Price:" << price << endl;
}
};
class Book: public Media
{
int page;
public:
void read()
{
Media::read();
cout << "Enter the number of pages" << endl;
cin >> page;
}
void display()
{
Media::display();
cout << "Pages:" << page << endl;
}
};
class Tape : public Media
{
float times;
public:
void read()
{
Media::read();
cout << "Enter the playing time of the tape" << endl;
cin >> times;
}
void display()
{
Media::display();
cout << "Playing time:" << times << endl;
}
};
int main()
{
int n,i;
cout << "Enter the number of books" << endl;
cin >> n;
Book a[n];
cout << "Enter book details" << endl;
for (i=0;i<n;i++)
a[i].read();
cout << "Book details:" << endl;
for (i=0;i<n;i++)
a[i].display();
cout << "Enter the number of tapes" << endl;
cin >> n;
Tape b[n];
cout << "Enter tape details" << endl;
for (i=0;i<n;i++)
b[i].read();
cout << "Tape details:" << endl;
for (i=0;i<n;i++)
b[i].display();
return 0;
}
