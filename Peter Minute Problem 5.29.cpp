# include<iostream>
# include<iomanip>
# include<math.h>
using namespace std;
int main()
{double i,ir,j=1,s=24,a,k=0,l=s;
ir=(5/100);
for(i=1627;i<=2017;i++)
{a=l*(pow(1.0+ir,j));
cout<<"\nInterest Rate Is In Year\t"<<i<<"\t"<<(l*(pow(1.0+0.05,j)));
j++;
s=s+a;
}

cout<<"\nTotal Amount  is\t"<<s;

cout<<"\nNow Tax Rate is\t"<<0.1;
s=24;
ir=(5/100);
for(i=1627;i<=2017;i++)
{a=l*(pow(1.0+ir,j));
cout<<"\nInterest Rate Is In Year\t"<<i<<"\t"<<(l*(pow(1.0+0.1,j)));
j++;
s=s+a;
}
system("pause")
;return 0;
}
