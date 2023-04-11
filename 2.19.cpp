# include<iostream>
using namespace std;
int main()
{int a,b,c;//variables declared
cout<<"\n\t Enter Three Numbers: ";
cin>>a>>b>>c;//input three numbers
cout<<"\nSum \t"<<a+b+c;//adding two numbers
cout<<"\nAverage \t"<<(a+b+c)/3;
cout<<"\nProduct \t"<<a*b*c;
if(a>b&&a>c)
{cout<<"\n"<<a<<"\tis largest\n";
}
if(b>a&&b>c)
{cout<<"\n"<<b<<"\tis largest\n";
}
if(c>a&&c>b)
{cout<<"\n"<<c<<"\tis largest\n";
}
if(a<b&&a<c)
cout<<"\n"<<a<<"\tis Smallest\n";
if(b<a&&b<c)
cout<<"\n"<<b<<"\tis Smallest\n";
if(c<a&&c<b)
cout<<"\n"<<c<<"\tis Smallest\n";

system("pause");
return 0;














}
