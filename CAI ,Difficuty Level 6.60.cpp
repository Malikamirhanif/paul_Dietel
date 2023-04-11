# include<iostream>
# include<cstdlib>
using namespace std;
int main()
{float a,p,r1,r2,an;
cout<<"\nEnter 1 For Single 2 For Double 3 For Triple\n";
cin>>an;
for(int i=0;i<10;i++)
{if(an==1)
{
r1=1+rand()%9;
r2=1+rand()%9;}
if(an==2)
{r1=11+rand()%99;
r2=11+rand()%99;
}
if(an==3)
{r1=100+rand()%999;
r2=100+rand()%999;
}
p=r1*r2;
cout<<r1<<"\tMultiplies By\t"<<r2<<"\tGive Us\n";
cin>>a;
while(a!=p)
{cout<<"\nPlease Try Again And Enter Your Answer\n";
cin>>a;
}}
cout<<"\nNow You Know How Multiply\n";
cout<<"\n\t\t\t\t\tThanx\n";
system("pause");
return 0;
}
