# include<iostream>
using namespace std;
int main()
{int s1=0,s2=0,d,g,t,x=1;
float m;
cout<<"\nEnter -1 to quit or distance\n";
cin>>d;
while(d!=-1)
{if(x!=1)
{
cout<<"\nEnter -1 to quit or Distance\n";
cin>>d;}
if(d!=-1)
{

s1=s1+d;
cout<<"\nEnter Gallons\n";
cin>>g;
cout<<"\nMileage is\t"<<static_cast <float>(d)/static_cast <float>(g);
s2=s2+g
;
m=static_cast <float>(s1)/static_cast <float>(s2);
cout<<"\nTotal Mileage is\t"<<m;
x++;
}}
if(d==-1)
cout<<"\nIncorrect Value\n";
system("pause");
return 0;
}
