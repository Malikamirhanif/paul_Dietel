# include<iostream>
using namespace std;
int main()
{float a,b,i,c,cl,nb,x=1;
cout<<"\nEnter Account Number  (-1 to end)\n";
cin>>a;
while (a!=-1)
{if(x!=1)
{cout<<"\nEnter Account Number  (-1 to end)\n";
cin>>a;
}
if(a!=-1)
{
cout<<"\nEnter Beginning Balance\n";
cin>>b;
cout<<"\nEnter Total Item Charges\n";
cin>>i;
cout<<"\nEnter Total Credits\n";
cin>>c;
cout<<"\nEnter Credit Limit\n";
cin>>cl;
x++;
cout<<"\nNew Balance is\t"<<b+i-c;
}}
system("pause");
return 0;
}
