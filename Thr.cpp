# include<iostream>
# include "Thr.h"
# include<string>
using namespace std;
int main()
{Thr o("Malik Aamir",1994,11,19,2017,10,25);
string no;
int a,b,c,d,e,f;
cout<<"\nEnter Your Name\n";
getline(cin,no);
cout<<"\nEnter Your Year of Birth\n";
cin>>a;
cout<<"\nEnter Your Month of Birth\n";
cin>>b;
cout<<"\nEnter Your Day of Birth\n";
cin>>c;
cout<<"\nEnter Current Year\n";
cin>>d;
cout<<"\nEnter Current Month\n";
cin>>e;
cout<<"\nEnter Current Date\n";
cin>>f;
o.set(no,a,b,c,d,e,f);
o.Age();
system("pause")
;return 0;
}
