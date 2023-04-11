# include<iostream>
using namespace std;
int main()
{float b=10,c=1,i,j,k;
int a;
cout<<"\nEnter Product Number\n";
cin>>a;
cout<<"\nEnter Quantity\n";
cin>>b;
for(i=1;a!=-1;i++)
{if(i!=1)
{cout<<"\nEnter Product Number\n";
cin>>a;
cout<<"\nEnter Quantity\n";
cin>>b;
}
switch ( a)
{case 1:
c=b*2.98;
cout<<"\nTotal Bill Is\t"<<c;
break;
case 2:
c=b*4.50;
cout<<"\nTotal Bill Is\t"<<c;
break;
case 3:
c=b*9.98;
cout<<"\nTotal Bill Is\t"<<c;
break;
case 4:
c=b*4.49;
cout<<"\nTotal Bill Is\t"<<c;
break;
default:
	cout<<"\nInvalid\n";
}
}


system("pause");
return 0;
}
