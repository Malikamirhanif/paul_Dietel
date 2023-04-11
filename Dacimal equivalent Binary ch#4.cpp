# include<iostream>
# include<math.h>
using namespace std;
int main()
{int a,b,c,d=0,s=0,e=0,f;
cout<<"\nEnter A Binary Number\n";
cin>>a;
b=a;
while(a!=0)
{c=a%10;
a=a/10;
d++;
}
while(e<d)
{c=b%10;
f=c*pow(2,e);
s=s+f;
b=b/10;
e++;
}
cout<<"\nDecimal of Binary Number\t"<<s;
system("pause");
return 0;
}

