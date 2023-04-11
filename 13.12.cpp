# include<iostream>
# include"Account.h"
using namespace std;
int main()
{Account y(500);
Account z(-5);
int a,c,d,e,f;
cout<<"\nEnter Credit Amount For 1st Object\n";
cin>>a;
y.credit(a);
cout<<"\nEnter Debit Amount For 1st Object\n";
cin>>c;
y.debit(c);
cout<<"\nBalance of First Object\n"<<y.getbalance();



cout<<"\nEnter Credit Amount For 2nd Object\n";
cin>>d;
z.credit(d);
cout<<"\nEnter Debit Amount For 2nd Object\n";
cin>>e;
z.debit(e);
cout<<"\nBalance of 2nd Object\n"<<z.getbalance();





system("pause");
return 0;



}
