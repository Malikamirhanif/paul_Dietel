# include<iostream>
using namespace std;
int main()
{float s,b=200,c=1;
cout<<"\nEnter Sales in Dollars$  (-1 to end)\n";
cin>>s;
while(s!=-1)
{if(c!=1)
{cout<<"\nEnter Sales in Dollars$  (-1 to end)\n";
cin>>s;
}
c++;
if(s!=-1)
cout<<"\nSalary is\t$"<<b+(s*0.09);

}
system("pause");
return 0;
}
