# include<iostream>
using namespace std;
int main()
{float tm,cg,mg,p,t,m;
cout<<"Enter Total Miles Driven Per Day\n";
cin>>tm;
cout<<"Enter Cost of Gasoline Per Gallon\n";
cin>>cg;
cout<<"Enter Total Average Miles Driven Per Gallon\n";
cin>>mg;
cout<<"Enter Parking Fee Per Day\n";
cin>>p;
m=1/mg;
t=(tm*cg*m)+p;
cout<<"\nCost Per Day\t"<<t;
system("pause");
return 0;
}
