# include<iostream>
using namespace std;
int main()
{int a,b,c,d;
cout<<"\nEnter A Five Digit Number\n";
cin>>a;
d=a;
do
{b=a%10;
c=(c*10)+b;
a=a/10;
}
while(a!=0)
;if(c==d)
cout<<"\nYes\t";
else
cout<<"\nNo\t";
system("pause");
return 0;}
