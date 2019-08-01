#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;
class Stack
{
int n,top;
int *a;
public:
Stack (int p)
{
top=-1;
n=p;
a=new int[n];
}
~Stack()
{
delete [] a;
}
void push(int x)
{
if (top==n-1)
throw 'a';
a[++top]=x;
}
int pop()
{
if (top==-1)
throw 1;
return a[top--];
}
void display()
{
if (top==-1)
throw 1;
int i;
for (i=top;i>=0;i--)
cout << a[i] << " ";
cout << endl;
}
};
int main()
{
int ch,n;
cout << "Enter maximum size of stack" << endl;
cin >> n;
Stack a(n);
while (1)
{
try
{
cout << "Enter 1 to push\nEnter 2 to pop\nEnter 3 to display\nEnter 4 to exit\n" ;
cin >> ch;
switch (ch)
{
case 1: cout << "Enter element to be pushed" << endl;
cin >> n;
a.push(n);
break;
case 2: n=a.pop();
cout << n << " popped" << endl;
break;
case 3: a.display();break;
case 4: exit(0);
}
}
catch (char a)
{
cout << "Stack overflow exception" << endl;
}
catch (int a)
{
cout << "Stack underflow exception" << endl;
}
}
return 0;
}
