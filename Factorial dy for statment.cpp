# include<iostream>
using namespace std;
int main()
{unsigned long int  a,i,c=1;
cout<<"\nEnter A Number For Factorial\n";
cin>>a;
i=a;
for(;i>0;i--)
{c=c*i;
}
cout<<"\nFactorial of A Number\t"<<c;
system("pause");
return 0;
}
