 # include<iostream>
 # include<math.h>
using namespace std;
int main()
{int a,b=1,c,d,e,f,g=7;
cout<<"\nEnter A Four Digit Number\n";
cin>>a;
while(b<=4)
{if(b==1)
{c=a%10;
}
if(b==2)
{d=a%10;
}
if(b==3)
{e=a%10;
}
if(b==4)
{f=a%10;
}
b++;
a=a/10;}
cout<<f<<"\t"<<e<<"\t"<<d<<"\t"<<c;
if(c>=7)
{c=c-7;
}
else
{c=c+3;
}
if(d>=7)
{d=d-7;
}
else
{d=d+3;
}
if(e>=7)
{e=e-7;
}
else
{e=e+3;
}
if(f>=7)
{f=f-7;
}
else
{f=f+3;
}
cout<<"\n"<<f<<e<<d<<c;
system("pause")
;return 0;
}
