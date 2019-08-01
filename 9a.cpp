#include<iostream>
#include<exception>
using namespace std;
int main()
{
try
{
int a,b;
cout << "Enter the two integers" << endl;
cin >> a >> b;
try
{
if (b==0)
throw "Divide by Zero";
else if (a%b==0)
throw 0;
else
throw 'a';
}
catch (char const *a)
{
cout << "Rethrowing a caught exception" << endl;
throw (a);
}
catch (int a)
{
cout << "A is divisible by B" << endl;
}
catch (char a)
{
cout << "A is not divisible by B" << endl;
}
}
catch (char const *a)
{
cout << a << " Error" << endl;
}
}
