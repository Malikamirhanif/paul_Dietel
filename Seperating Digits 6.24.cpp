# include<iostream>
# include<math.h>
using namespace std;
float q (float a,float b);
float r (float a,float b);
void so1(int  a);
int main()
{float s,so,h;
int l
;cout<<"\nEnter First Number\n";
cin>>s;
cout<<"\nEnter Second Number\n"
;cin>>so;
h=q(s,so);
cout<<"\nQuotient Is\t"<<h;
h=r(s,so);
cout<<"\nReminder is\t"<<h;
cout<<"\nEnter A Number To Seperate Its Digits\n";
cin>>l;
so1(l);
system("pause");
return 0;
}
float q (float a,float b)
{float ho;
return (a/b);
}
float r(float a,float b)
{return(fmod(a,b));
}
void so1 (int  a)
{int c=0,d,e;
int rev;
do
{d=a%10;
rev=(rev*10)+d;
a=a/10;
}
while(a!=0);
a=rev;
e=a;
while(a!=0)
{d=a%10;
a=a/10;
c++;
}
for(int j=0;j<c;j++)
{d=e%10;
e=e/10;
cout<<"  "<<d;
}
}
