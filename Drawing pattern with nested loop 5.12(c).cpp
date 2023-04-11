# include<iostream>
using namespace std;
int main()
{int a,b=10,c=1,i,j,k;
for(i=1;i<=10;i++)
{if(i!=1)
{
for(k=1;k<c;k++)
cout<<" ";}
for(j=1;j<=b;j++)
{cout<<"*";
}
b--;
c++;
cout<<"\n";
}
system("pause");
return 0;
}
