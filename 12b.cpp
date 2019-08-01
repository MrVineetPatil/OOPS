#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream x,y;
y.open("example.txt",ios::out|ios::trunc);
string line;
cout << "Enter lines, enter -1 to stop" << endl;
while(y)
{
getline(cin,line);
if (line=="-1")
break;
y << line << endl;
}
y.close();
y.open("example.txt",ios::in);
int count1=0;
char vowel[]={'a','e','i','o','u'};
int vowel_count[5]={0};
int position[5][100]={0};
y>>noskipws;
while (!y.eof())
{
char c;
y>>c;
count1++;
if (c=='A'||c=='a')
position[0][vowel_count[0]++]=count1;
if (c=='E'||c=='e')
position[1][vowel_count[1]++]=count1;
if (c=='I'||c=='i')
position[2][vowel_count[2]++]=count1;
if (c=='O'||c=='o')
position[3][vowel_count[3]++]=count1;
if (c=='U'||c=='u')
position[4][vowel_count[4]++]=count1;
}
y.close();
x.open("position.txt",ios::out|ios::trunc);
x << "Vowel:\tCount:\tPosition:\n";
for (int i=0;i<5;i++)
{
x << vowel[i] << "\t\t" << vowel_count[i] << "\t\t";
for (int j=0;j<vowel_count[i];j++)
x<< position[i][j]<<",";
x << endl;
}
x.close();
return 0;
}
