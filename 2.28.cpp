# include<iostream>
using namespace std;
int main()
{int a,b,c,d,e,n;
cout<<"Enter Five Digit Number\n";
cin>>n;
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
n=n/10;
e=n%10;
n=n/10;

cout<<e<<" "<<d<<" "<<c<<" "<<b<<" "<<a;
system("pause");
return 0;
}
