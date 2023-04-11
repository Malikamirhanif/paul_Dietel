# include<iostream>
# include<cstdlib>
using namespace std;
int main()
{float a,p,r1,r2,r=0,w=0,an=1;
while(an==1)
{

for(int i=0;i<10;i++)
{
r1=1+rand()%9;
r2=1+rand()%9;
p=r1*r2;
cout<<r1<<"\tMultiplies By\t"<<r2<<"\tGive Us\n";
cin>>a;
if(a==p)
{
r++;
cout<<"\nYES\n";}

if(a!=p)
w++;
}
float z=r*10;
if(z>=75)
cout<<"\nCongratulations , You Are Ready To Go Next Lenel";
else
cout<<"\nPlaese Ask Your Teacher For Extra Help\n";
cout<<"\nPlaese Enter 1 To Run Again\n";
cin>>an;}
system("pause");
return 0;
}
