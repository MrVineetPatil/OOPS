#include<iostream>
#include<cstdlib>
#include<list>
using namespace std;
void showlist(list <int> g)
{
list <int> :: iterator p;
for (p=g.begin();p!=g.end();p++)
{
cout << *p << " ";
}
cout << endl;
}
int main()
{
list<int>g1,g2;
int n,i,temp;
cout << "Enter no of elements" << endl;
cin >> n;
cout << "Enter elements" << endl;
for(i=0;i<n;i++)
{
cin>>temp;
g1.push_back(temp);
}
int ch;
while (1)
{
cout << "Enter 1 to insert at front and rear\nEnter 2 to delete at front and end\nEnter 3 to find
list size" << endl;
cout << "Enter 4 to remove specific\nEnter 5 to remove duplicate\nEnter 6 to reverse\nEnter 7
to merge and sort\n" << endl;
cout << "Enter 0 to exit" << endl;
cin >> ch;
switch(ch)
{
case 1: cout << "Enter element to push in front" << endl;
cin >> temp;
g1.push_front(temp);
cout << "Enter element to push in back" << endl;
cin >> temp;
g1.push_back(temp);
cout << "Resulting list" << endl;
showlist(g1);
break;
case 2: temp=g1.front();
g1.pop_front();
cout << temp << " popped" << endl;
temp=g1.back();
g1.pop_back();
cout << temp << " popped" << endl;
cout << "Resulting list" << endl;
showlist(g1);
break;
case 3: cout << "Size of list:" << g1.size() << endl;
break;
case 4: cout << "Enter element to be removed" << endl;
cin >> temp;
g1.remove(temp);
cout << "Resulting list" << endl;
showlist(g1);
break;
case 5: g1.sort();
g1.unique();
cout << "Duplicate elements removed" << endl;
showlist(g1);
break;
case 6: g1.reverse();
cout << "Resulting list" << endl;
showlist(g1);
break;
case 7: cout << "Enter number of elements of list 2" << endl;
cin >> n;
cout << "Enter elements" << endl;
for (i=0;i<n;i++)
{
cin >> temp;
g2.push_back(temp);
}
g1.merge(g2);
g1.sort();
cout << "Merged and sorted list" << endl;
showlist(g1);
break;
case 0: exit(0);
}
}
}
