#include<iostream>
using namespace std;
class Box
{
float l,b,h,vol;
static int x;
public:
Box() {x++;}
void read()
{
cout << "Enter length,breadth and height respectively" << endl;
cin >> l >> b >> h;
}
void getVolume()
{
vol = l*b*h;
}
void display()
{
cout << "Length:" << l << endl << "Breadth:" << b << endl;
cout << "Height:" << h << endl << "Volume:" << vol << endl;
}
static void getCount();
};
void Box::getCount()
{
cout << "No. of objects:" << x << endl;
}
int Box::x=0;
int main()
{
int i,n;
cout << "Enter the number of boxes" << endl;
cin >> n;
Box a[n];
cout << "Enter box details:" << endl;
for (i=0;i<n;i++)
{
a[i].read();
a[i].getVolume();
}
cout << "Box details are:" << endl;
for (i=0;i<n;i++)
a[i].display();
Box::getCount();
return 0;
}
