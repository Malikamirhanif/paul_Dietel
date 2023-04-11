# include<iostream>
# include"Thr.h"
# include"B.h"
# include<string>
using namespace std;
int main()
{Thr o("Malik Aamir",1994,11,19,2017,10,25);
string no;
int a,b,c,d,e,f,g,h;
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
cout<<"\nEnter Mass in kg\n";
cin>>g;
cout<<"\nEnter Height in m\n";
cin>>h;
o.set(no,a,b,c,d,e,f);
o.Age();
o.bm(g,h);
system("pause")
;return 0;
}
