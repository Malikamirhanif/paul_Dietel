# include<iostream>
using namespace std;
int p (int a);
void pr();
int main()
{int a,b,c,d;
cout<<"\nEnter One Numbers\n";
cin>>a;
d=p(a);
if(d==1)
cout<<"Answer Is\t Yes";
if(d==0)
cout<<"Answer is\tNO";
pr();
system("pause");
return 0;
}
int p (int a)
{int s=a,c=0;
for(int i=1;i<=s;i++)
{if(a%i==0)
{c++;
}
}
if(c==2)
return 1;
else
return 0;
}
void pr ()
{int c=0,j;
for(int i=2;i<=10000;i++)
{for( j=1;j<=10000;j++)
{if(i%j==0)
c++;
}
if(c==2)
{cout<<"\nThis Number Is Prime\t"<<i;
}
c=0;
j=1;
}
}
