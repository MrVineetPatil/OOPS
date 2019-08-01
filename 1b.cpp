#include<iostream>
using namespace std;
class A
{
int i;
public:
A(){ cout << "Class A constructor called" << endl;}
~A() { cout << "Class A destructor called" << endl;}
void show() {i=10; cout << "The value of I:" << i << endl; }
};
class B: virtual public A
{
public:
B() {cout << "Class B constructor called" << endl;}
~B() {cout << "Class B destructor called" << endl;}
};
class C: virtual public A
{
public:
C() {cout << "Class C constructor called" << endl;}
~C() {cout << "Class C destructor called" << endl;}
};
class D: public B, public C
{
public:
D() {cout << "Class D constructor called" << endl;}
~D() {cout << "Class D destructor called" << endl;}
};
int main()
{
D a;
a.show();
return 0;
}
