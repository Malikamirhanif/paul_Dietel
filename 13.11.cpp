# include<iostream>
# include "Gradebook.h"
# include<string>
using namespace std;
int main()
{string st;
Gradebook o("CS 101","Aamir");
cout<<"\n\tEnter Instructor Name\n";
getline(cin,st);
o.set(st);
o.disp();
system("pause");
return 0;
}

