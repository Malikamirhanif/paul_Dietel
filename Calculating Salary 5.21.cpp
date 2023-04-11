# include<iostream>
using namespace std;
int main()
{int g,i,h,si,p;
cout<<"\nEnter  No.1 for Manager ,No.2 for Hourly Worker ,No.3 For Comission Worker,No.4 for Pieceworkers\n";
cout<<"\nEnter Any Code Or Zero To Exit\n";
cin>>g;
for(i=0;g!=0;i++)
{{if(i!=0)
{cout<<"\nEnter Any Code Or Zero To Exit\n";
cin>>g;
}}
switch (g)
{case 1:
	{cout<<"\nSalary is \t"<<150;
	}
	break;
case 2:
	{cout<<"\nEnetr Hours\n";
cin>>h;
if(h<=40)
{cout<<"\nSalary is\t"<<10*h;
}
else
{float r,s;
s=40*10;
r=h-40;
cout<<"\nSalary is\t"<<s+(r*(10+(10*(1.5))));
}}
break;
	
case 3:
	{cout<<"\nEnter Sold Items is\n";
	cin>>si;
	cout<<"\nSalary is\t"<<si*5;
	}
	break;
case 4:
	{cout<<"\nEnter Pieces Produced\n";
	cin>>p;
	cout<<"\nSalary is\t"<<p*7;
	}
	default:
		{cout<<"\nInvalid Choice\n";
		}
}}

system("pause");
return 0;
}



