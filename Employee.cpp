# include<iostream>
# include<string>
# include "Employee.h"
using namespace std;
int main()
{Employee e1("Muhammad","Aamir",1500);
Employee e2("Muhammad","Moiz",1200);
string nfo;
string sfo;
int salo;
cout<<"\nEnter First Name\n";
getline(cin,nfo);
cout<<"\nEnter Second Name\n";
getline(cin,sfo);
cout<<"\nEnter Monthly Salary\n";
cin>>salo;
e1.set(nfo,sfo,salo);
e1.disp();
cout<<"\nEnter First Name\n";
getline(cin,nfo);
cout<<"\nEnter Second Name\n";
getline(cin,sfo);
cout<<"\nEnter Monthly Salary\n";
cin>>salo;
e2.set(nfo,sfo,salo);
e2.disp();
system("pause");
return 0;
}
