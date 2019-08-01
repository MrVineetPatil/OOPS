#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string line;
fstream myfile;
myfile.open("example.txt",ios::out|ios::app);
cout << "Enter lines, Enter -1 to stop" << endl;
while (!myfile.eof())
{
getline(cin,line);
if (line=="-1")
break;
myfile << line;
}
myfile.close();
myfile.open("example.txt",ios::in);
myfile.seekg(0,ios::end);
int size1 = myfile.tellg();
cout << "Size is:" << size1 << endl;
}
