#include<iostream>
using namespace std;
class A
{
public:
A(){cout << "Class A constructor called" << endl;}
~A(){cout << "Class A destructor called" << endl;}
};
class B: public A
{
public:
B(){cout << "Class B constructor called" << endl;}
~B(){cout << "Class B destructor called" << endl;}
};
class C
{
public:
C(){cout << "Class C constructor called" << endl;}
~C(){cout << "Class C destructor called" << endl;}
};
class D: public B, public C
{
public:
D(){cout << "Class D constructor called" << endl;}
~D(){cout << "Class D destructor called" << endl;}
};
int main()
{
cout << "Constructor destructor call for class A" << endl;
{
A a; cout << endl;
}cout << endl;
cout << "Constructor destructor call for class B" << endl;
{
B a; cout << endl;
}cout<<endl;
cout << "Constructor destructor call for class C" << endl;
{
C a; cout << endl;
}cout<< endl;
cout << "Constructor destructor call for class D" << endl;
{
D a; cout << endl;
}cout<<endl;
return 0;
}
