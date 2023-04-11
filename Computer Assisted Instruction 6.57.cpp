# include<iostream>
# include<cstdlib>
using namespace std;
int main()
{int a,p,r1,r2;
for(int i=0;i<10;i++)
{
r1=1+rand()%20;
r2=1+rand()%20;
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
