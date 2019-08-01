#include<iostream>
using namespace std;
class Person
{
protected:
string name;
int age;
public:
void read()
{
cout << "Enter name and age" << endl;
cin >> name;
cin >> age;
}
void display()
{
cout << "Name:" << name << endl << "Age:" << age << endl;
}
};
class Teacher : public Person
{
int publ;
public:
void read()
{
Person::read();
cout << "Enter the number of publications" << endl;
cin >> publ;
}
void display()
{
Person::display();
cout << "Number of publications:" << publ << endl;
}
};
class Student : public Person
{
protected:
int m1,m2,m3;
string usn;
public:
void read()
{
Person::read();
cout << "Enter USN" << endl;
cin >> usn;
cout << "Enter marks obtained in three subjects out of 50" << endl;
cin >> m1 >> m2 >> m3;
}
void display()
{
Person::display();
cout << "USN:" << usn << endl;
cout << "Marks 1:" << m1 << endl << "Marks 2:" << m2 << endl << "Marks 3:" << m3 <<
endl;
}
};
class Marks : public Student
{
public:
void getAverage()
{
float avg;
avg = (m1+m2+m3)/3;
cout << "Average obtained:" << avg << endl;
}
void getPercent()
{
cout << "Percentage of marks:" << endl;
cout << "Marks 1:" << m1*100/50 << "%" << endl;
cout << "Marks 2:" << m2*100/50 << "%" << endl;
cout << "Marks 3:" << m3*100/50 << "%" << endl;
}
};
int main()
{
int n,i;
cout << "Enter the number of teachers" << endl;
cin >> n;
Teacher a[n];
cout << "Enter teacher details" << endl;
for (i=0;i<n;i++)
{
a[i].read();
}
cout<< "Teacher details:" << endl;
for (i=0;i<n;i++)
a[i].display();
cout << "Enter the number of students" << endl;
cin >> n;
Marks b[n];
cout << "Enter student details" << endl;
for (i=0;i<n;i++)
{
b[i].read();
}
cout<< "Student details:" << endl;
for (i=0;i<n;i++)
{
b[i].display();
b[i].getAverage();
b[i].getPercent();
}
return 0;
}
