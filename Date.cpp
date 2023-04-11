# include<iostream>
# include"Date.h"
using namespace std;
int main()
{Date d(1990,23,15);
int d3,m3,y3;
cout<<"\nEnter Year\n";
cin>>y3;
cout<<"\nEnter Month\n";
cin>>m3;
cout<<"\nEnter Date\n";
cin>>d3;
d.set(y3,m3,d3);
d.disp();
system("pause");
return 0;
}
