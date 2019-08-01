#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string line;
fstream myfile;
myfile.open("example.txt",ios::out|ios::trunc);
cout << "Enter lines, Enter -1 to stop" << endl;
while (myfile)
{
getline(cin,line);
if (line=="-1")
break;
myfile<<line<<endl;
}
myfile.close();
myfile.open("example.txt",ios::in);
int count1 = 0;
while(getline(myfile,line))
{;
count1++;
}
myfile.close();
cout << "No. of lines of text file : " << count1-1 << endl;
return 0;
}
