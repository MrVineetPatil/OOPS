#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
void showlist(vector <int> g)
{
vector <int> :: iterator p;
for (p=g.begin();p!=g.end();++p)
{
cout << *p << " ";
}
cout << endl;
}
int main()
{
vector<int>g1;
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
cout << "Enter 1 to insert an element\nEnter 2 to delete last element\nEnter 3 to find list size"
<< endl;
cout << "Enter 4 to display\nEnter 5 to clear\n" << endl;
cout << "Enter 0 to exit" << endl;
cin >> ch;
switch(ch)
{
case 1: cout << "Enter element to be inserted" << endl;
cin >> temp;
g1.push_back(temp);
cout << "Element inserted" << endl;
break;
case 2: if (!g1.empty())
{
cout << "Deleted" << endl;
g1.pop_back();
}
else
cout << "Empty" << endl;
break;
case 3: cout << "Size of list:" << g1.size() << endl;
break;
case 4: if (!g1.empty())
showlist(g1);
else
cout << "Empty" << endl;
break;
case 5: g1.clear();
cout << "The vector has been cleared" << endl;
break;
case 0: exit(0);
}
}
}
