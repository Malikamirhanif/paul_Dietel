# include<iostream>
# include<math.h>
using namespace std;
int main()
{float a,b=2000,c,d,e,f;
cout<<"\nEnter Poppulation\n";
cin>>a;
e=a;
cout<<"\nEnter Percentage\n";
cin>>c;
c=c/100;
while(b<=2075)
{d=(a*c);
a=a+d;
cout<<"\nIncrease   in   Population   in   year\t"<<b<<"   is   "<<d<<"\tTotal   is  Ppulation\t"<<a;
b++;
}
system("pause");
return 0;
}
