# include<iostream>
# include<math.h>
using namespace std;
int  perfect (int  a);
int main()
{int  a,b,c,d;
cout<<"\nEnter One Numbers\n";
cin>>a;
d=perfect (a);
if(d==1)
cout<<"Answer Is\t YES";
if(d==0)
cout<<"Answer Is\t NO";
system("pause");
return 0;
}
int perfect (int a)
{int h,s=0,so,m;
so=a;
m=a;
h=a/2;
for(int i=1;i<=h;i++)
{if(m%i==0)
{s=s+i;
}
}
if(s==so)
return 1;
else
return 0;
}
