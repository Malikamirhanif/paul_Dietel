# include<iostream>
using namespace std;
int main()
{int a,c=0,g1,g2,t,m=0,n=0;
cout<<"\nEnter A Number\n";
cin>>a;
g1=a;
g2=a;
m=g2;
n=g1;
while (c<4)
{
cout<<"\nEnter A Number\n";
cin>>a;
if(c<=0 ||g2>=m)

g2=a;
if(a!=0)
{
if(g2>=m)
if(g2>g1)
{t=g1;
if(g1>=n)
g1=g2;
g2=t;
}}
c++;}
cout<<"\nFirst Heighest is\t"<<g1;
cout<<"\nSecond Heighest is\t"<<g2;
system("pause");
return 0;
}
