#include<iostream>
using namespace std;
class Employee
{
int emp_no;
float basic,da,it,netsal;
string name;
public:
void read()
{
cout << "Enter name" << endl;
cin.ignore(256,'\n');
getline (cin,name);
cout << "Enter employee number" << endl;
cin >> emp_no;
cout << "Enter basic salary" << endl;
cin >> basic;
da = 0.52*basic;
it = 0.3*1.52*basic;
}
void netsalc ()
{
float gross = 1.52*basic;
netsal = gross - it;
}
void display()
{
cout << "Name:" << name << endl << "Emp No:" << emp_no << endl;
cout << "Basic:" << basic << endl << "DA:" << da << endl;
cout << "IT:" << it << endl << "Net salary:" << netsal << endl;
}
};
int main()
{
int n;
cout << "Enter number of employees" << endl;
cin >> n;
Employee a[n];
for (int i=0;i<n;i++)
{
a[i].read();
a[i].netsalc();
}
for (int i=0;i<n;i++)
a[i].display();
return 0;
}
