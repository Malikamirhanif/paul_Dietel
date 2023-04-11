# include<iostream>
using namespace std;
int main()
{int n,h,s1,s2,f,l,i,j,k,m=1;
cout<<"\nEnter No. Of Rows (Only Odd) Of Starick\n";
cin>>n;
h=n/2;
s1=h;
s2=h;
f=h+1;
l=h;
for(i=1;i<=f;i++)
{for(j=h;j>=m;j--)
{cout<<" ";
}
for(k=1;k<=i;k++)
{cout<<"*";
cout<<" ";
}
cout<<"\n";
m++;
}
for(i=1;i<=l;i++)
{for(j=1;j<=i;j++)
{cout<<" ";
}
for(k=h;k>=1;k--)
{cout<<"*";
cout<<" ";
}
cout<<"\n";
h--;
}
system("pause");
return 0;
}
