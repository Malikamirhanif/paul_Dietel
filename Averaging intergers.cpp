# include<iostream>
using namespace std;
int main()
{float a,b,i,s=0,j=1;
cout<<"\nEnter A Number\n";
cin>>a;
s=a;
for(i=0;a!=999;i++)
{cout<<"\nEnter A Number\n";
cin>>a;
if(a!=999)
s=s+a;
j++;
}
cout<<"\nAverage of  Numbers is\t"<<s/j;
system("pause");
return 0;
}
