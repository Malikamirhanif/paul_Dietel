# include<iostream>
using namespace std;
int main()
{float w,x=1,e,es,r;
cout<<"\nEnter Hours Worked  (-1 to end)\n";
cin>>w;
cout<<"\nEnter Hourly Rate of Employee\n";
cin>>r;
while(w!=-1)
{if(x!=1)
{cout<<"\nEnter Hours Worked  (-1 to end)\n";
cin>>w;
cout<<"\nEnter Hourly Rate of Employee\n";
cin>>r;
}
if(w!=-1)
{
if(w<=40)
{cout<<"\nSalary is\t$"<<w*10;
}}

if(w>40)
{if(w!=-1)
{
e=w-40;
es=e*15;
cout<<"\nSalary is\t$"<<(40*10)+es;
}}
x++;
}
if(w==-1)
{cout<<"\nInvalid Value";
}
system("pause");
return 0;
}
