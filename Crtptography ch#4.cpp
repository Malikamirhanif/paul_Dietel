 # include<iostream>
 # include<math.h>
using namespace std;
int main()
{int a,b=1,c,d,e,f;
cout<<"\nEnter A Four Digit Number\n";
cin>>a;
while(b<=4)
{if(b==1)
{c=b%10;
c=c+7;
}
if(b==2)
{d=b%10;
d=d+7;
}
if(b==3)
{e=b%10;
e=e+7;
}
if(b==4)
{f=b%10;
f=f+7;
}
b++;
}
c=c%10;
d=d%10;
e=e%10;
f=f%10;
cout<<c<<d<<e<<f;
system("pause")
;return 0;
}
