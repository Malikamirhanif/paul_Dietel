# include<iostream>
# include<iomanip>
# include<math.h>
using namespace std;
int main()
{float p,i,a,n,r;
cout<<"\nEnter Origional Amount\n";
cin>>p
;cout<<"\nEnter Interset Rate\n";
cin>>r;
cout<<"\nEnter  Number of Years\n";
cin>>n;
r=r/100;
cout<<fixed<<setprecision(2);
for(i=1;i<=n;i++)
{a=p*pow(1+r,i);
cout<<"\nTotal Amount Aftre\t"<<i<<"  is   "<<a;
}
system("pause");
return 0;
}
