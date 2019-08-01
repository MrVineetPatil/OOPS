#include<iostream>
#include<fstream>
using namespace std;
class Student
{
string name,roll;
int m1,m2,m3;
char grade;
public:
void read()
{
cout << "Enter name and roll" << endl;
cin >> name;
cin >> roll;
cout << "Enter marks obtained in 3 subjects" << endl;
cin >> m1 >> m2 >> m3;
}
void display()
{
cout << "Name:" << name << endl << "Roll:" << roll << endl;
cout << "Marks1:" << m1 << endl << "Marks2:" << m2 << endl << "Marks3:" << m3 << endl;
cout << "Grade:" << grade << endl;
}
void getGrade()
{
int sum = m1+m2+m3;
if (sum>=270)
grade='A';
else if (sum>=240)
grade='B';
else if (sum>=210)
grade='C';
else if (sum>=180)
grade='D';
else
grade='E';
}
};
int main()
{
fstream myfile;
myfile.open("example1.dat",ios::out|ios::binary);
int n,i;
cout << "Enter the number of students" << endl;
cin >> n;
Student a;
for (i=0;i<n;i++)
{
a.read();
a.getGrade();
myfile.write((char*)&a,sizeof(a));
}
myfile.close();
myfile.open("example1.dat",ios::in|ios::binary);
while(!myfile.eof())
{
if (myfile.read((char*)&a,sizeof(a)))
a.display();
}
myfile.close();
return 0;
}
