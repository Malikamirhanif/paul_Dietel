# include<iostream>
using namespace std;
int reverse (int a);
int main()
{int a,b,c,d;
cout<<"\nEnter A Numbers\n";
cin>>a;
reverse(a);
system("pause");
return 0;
}
int reverse(int a)
{int rev,d,n;
n=a;
do
{
d=a%10;
rev=(rev*10)+d;
a=a/10;
}
while(a!=0)
;
cout<<"\n\ Answer \t"<<rev;
}
