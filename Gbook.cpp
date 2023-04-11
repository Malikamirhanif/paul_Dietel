# include<iostream>
# include<string>
# include "Gbook.h"
using namespace std;
int main()
{string n;
Gbook o;
cout<<"\n\tEnter String\n";
getline(cin,n);
o.get(n);
cout<<"String is"<<o.put();
system("pause");
return 0;

}
