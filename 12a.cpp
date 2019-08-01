#include<iostream>
#include<cstdlib>
#include<map>
using namespace std;
void showlist(map <char,int> g)
{
map <char,int> :: iterator p;
cout << "Key: \tValue: " << endl;
for (p=g.begin();p!=g.end();++p)
{
cout << p->first << "\t" << p->second << endl;
}
cout << endl;
}
int main()
{
map<char,int>g1;
int n,i,temp;
char key;
cout << "Enter no of elements" << endl;
cin >> n;
cout << "Enter elements" << endl;
for(i=0;i<n;i++)
{
cout << "Enter key and value respectively" << endl;
cin >> key;
cin >> temp;
g1.insert(pair<char,int>(key,temp));
}
int ch;
while (1)
{
cout << "Enter 1 to insert an element\nEnter 2 to delete an element\nEnter 3 to find list size"
<< endl;
cout << "Enter 4 to display\nEnter 5 to find element\nEnter 6 to display a value at key\n" <<
endl;
cout << "Enter 0 to exit" << endl;
cin >> ch;
switch(ch)
{
case 1: cout << "Enter key and value to be inserted" << endl;
cin >> key;
cin >> temp;
g1.insert(pair<char,int>(key,temp));
cout << "Element inserted" << endl;
break;
case 2: cout << "Enter key of element to be deleted" << endl;
cin >> key;
if (g1.find(key)!=g1.end())
{
g1.erase(key);
cout << "Element deleted" << endl;
}
else
cout << "Element not present" << endl;
break;
case 3: cout << "Size of list:" << g1.size() << endl;
break;
case 4: if (!g1.empty())
showlist(g1);
else
cout << "Empty" << endl;
break;
case 5: cout << "Enter key" << endl;
cin >> key;
if (g1.find(key)!=g1.end())
cout << "Element found" << endl;
else
cout << "Not found" << endl;
break;
case 6: cout << "Enter key value" << endl;
cin >> key;
if (g1.find(key)!=g1.end())
cout << "Respective element:" << g1.at(key) << endl;
else
cout << "Not found" << endl;
break;
case 0: exit(0);
}
}
}
