#include<iostream>
using namespace std;
class Student
{
protected:
string name,usn;
public:
virtual void getdata()=0;
void display()
{
cout << "Name:" << name << endl << "USN:" << usn << endl;
}
};
class Engineer: public Student
{
string branch;
public:
void getdata()
{
cout << "Enter name and usn" << endl;
cin >> name;
cin >> usn;
cout << "Enter branch" << endl;
cin >> branch;
}
void display()
{
Student::display();
cout << "Branch:" << branch << endl;
}
};
class Medicine: public Student
{
int yr;
public:
void getdata()
{
cout << "Enter name and usn" << endl;
cin >> name;
cin >> usn;
cout << "Enter year" << endl;
cin >> yr;
}
void display()
{
Student::display();
cout << "Year:" << yr << endl;
}
};
class Science: public Student
{
int yr,stip;
public:
void getdata()
{
cout << "Enter name and usn" << endl;
cin >> name;
cin >> usn;
cout << "Enter the year and stipend" << endl;
cin >> yr >> stip;
}
void display()
{
Student::display();
cout << "Year:" << yr << endl << "Stipend:" << stip << endl;
}
};
int main()
{
Engineer a;
cout << "Enter engineer details" << endl;
a.getdata();
cout << "Engineer details:" << endl;
a.display();
Medicine b;
cout << "Enter medicine details" << endl;
b.getdata();
cout << "Medicine details:" << endl;
b.display();
Science c;
cout << "Enter science details" << endl;
c.getdata();
cout << "Science details:" << endl;
c.display();
return 0;
}
