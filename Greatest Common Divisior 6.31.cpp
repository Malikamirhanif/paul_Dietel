# include<iostream>
int gcd (int a,int b);
using namespace std;
int main()
{int x,y;
cout<<"\nEnter Two Numbers\n";
cin>>x>>y;
int g;
g=gcd(x,y);
cout<<"\nGreatest Common Divisior is\t"<<g;
system("pause");
return 0;
}
int gcd (int a,int b)
{int i,max=0;
if(a>max)
max=a;
if(b>max)
max=b;
int v=0;
for(i=1;i<=max;i++)
{if(a%i==0&&b%i==0)
{if(i>v)
v=i
;}
}
return v;
}
