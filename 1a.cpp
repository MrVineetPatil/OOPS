#include<iostream>
using namespace std;
class Student
{
string name,roll;
int m1,m2,m3;
char grade;
public:
void read()
{
cout << "Enter name" << endl ;
cin.ignore(256,'\n');
getline(cin,name);
cout << "Enter roll" << endl;
getline(cin,roll);
cout << "Enter marks obtained in three subjects" << endl;
cin >> m1 >> m2 >> m3;
}
void display()
{
cout << "Name:" << name << endl << "Roll:" << roll << endl;
cout << "Marks 1:" << m1 << endl << "Marks 2:" << m2 << endl << "Marks 3:" << m3 <<
endl;
cout << "Grade:" << grade << endl;
}
void getGrade()
{
int marks = m1+m2+m3;
if (marks>=270)
grade = 'S';
else if (marks>=240)
grade = 'A';
else if (marks>=210)
grade = 'B';
else if (marks>=180)
grade = 'C';
else if (marks>=150)
grade = 'D';
else if (marks>=120)
grade = 'E';
else
grade = 'F';
}
};
int main()
{
int n;
cout << "Enter number of students" << endl;
cin >> n;
Student a[n];
Student *p;
p=a;
for (int i=0;i<n;i++)
{
p[i].read();
p[i].getGrade();
}
cout << "Student details are" << endl;
for (int i=0;i<n;i++)
p[i].display();
return 0;
}
