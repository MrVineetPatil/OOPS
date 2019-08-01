#include<iostream>
using namespace std;
class Complex
{
float re,im;
public:
Complex_read()
{
cout << "Enter real part and imaginary part respectively" << endl;
cin >> re >> im;
}
void display()
{
cout << re << "+" << im << "i" << endl;
}
friend void add (Complex a, Complex b);
friend void mult (Complex a, Complex b);
};
void add (Complex a, Complex b)
{
Complex c;
c.re=a.re+b.re;
c.im=a.im+b.im;
cout << "Result of addition:" << endl;
c.display();
}
void mult (Complex a, Complex b)
{
Complex c;
c.re = (a.re*b.re)-(a.im*b.im);
c.im = (a.re*b.im)+(a.im*b.re);
cout << "Result of multiplication:" << endl;
c.display();
}
int main()
{
Complex a,b;
a.Complex_read();
b.Complex_read();
cout << "The two numbers are" << endl;
a.display();
b.display();
add (a,b);
mult (a,b);
return 0;
}
b)
#include<iostream>
using namespace std;
class A
{
int i;
public:
A(int a){i=a;}
void operator ++()
{
cout << "Pre-incremented number is " << ++i << endl;
}
void operator ++(int)
{
cout << "Post-incremented number is " << i++ << endl;
}
};
int main()
{
int n;
cout << "Enter an integer" << endl;
cin >> n;
A a(n);
a++;
++a;
return 0;
}#include<iostream>
#include<string>
using namespace std;
class str1
{ string s;
public: str1(string a)
{ s=a; }

str1(const str1 &obj) //using const keyword
{
    s=obj.s;
 }
 void display()
 {
     cout<<s<<endl;
 }
  friend void concat(str1 a,str1 b) //friend function
  { string c;
  c=a.s+b.s;
  cout<<c<<endl; } };
  main() {
      str1 a("Rakshith");
      str1 b=a;
      a.display();
      b.display();
      concat(a,b);
      }
