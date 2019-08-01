#include<fstream>
using namespace std;
int main()
{
fstream x,y;
string line;
x.open("example.txt",ios::out|ios::trunc);
cout << "Enter lines into file, Enter -1 to stop" << endl;
while (x)
{
getline(cin,line);
if (line=="-1")
break;
x << line << endl;
}
y.open("position.txt",ios::out|ios::trunc);
cout << "Enter lines into file, Enter -1 to stop" << endl;
while (y)
{
getline(cin,line);
if (line=="-1")
break;
y << line << endl;
}
y.close();
y.open("position.txt",ios::in);
while (!y.eof())
{
getline(y,line);
x<<line<<endl;
}
x.close();
x.open("example.txt",ios::in);
cout << "Appended content is" << endl;
while (!x.eof())
{
getline(x,line);
cout << line << "\t";
}
x.close();
return 0;
}
