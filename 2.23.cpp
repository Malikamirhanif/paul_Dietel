# include<iostream>
using namespace std;
int main()
{int a,b,c,d,e,f;
cout<<"\n\tEnter Five Numbers\n";
cin>>a>>b>>c>>d>>e;
if (a>b&&a>c&&a>d&&a>e)
cout<<"\n\tLargest Number is \t"<<a;
if (b>a&&b>c&&b>d&&b>e)
cout<<"\n\tLargest Number is \t"<<b;
if (c>a&&c>b&&c>d&&c>e)
cout<<"\n\tLargest Number is \t"<<c;
if (d>b&&d>c&&d>a&&d>e)
cout<<"\n\tLargest Number is \t"<<d;
if (e>a&&e>c&&e>d&&e>b)
cout<<"\n\tLargest Number is \t"<<e;
if (a<b&&a<c&&a<d&&a<e)
cout<<"\n\tSmalest Number is \t"<<a;
if (b<a&&b<c&&b<d&&b<e)
cout<<"\n\tSmalest Number is \t"<<b;
if (c>a&&c>b&&c>d&&c<e)
cout<<"\n\tSmalest Number is \t"<<c;
if (d<b&&d<c&&d<a&&d<e)
cout<<"\n\tSmalest Number is \t"<<d;
if (e<a&&e<c&&e<d&&e<b)
cout<<"\n\tsmalest Number is \t"<<e;
system("pause");
return 0;














}
