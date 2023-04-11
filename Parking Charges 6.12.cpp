# include<iostream>
using namespace std;
float calculateCharges (float n);
int main()
{float h,i,c;
cout<<"\nEnter Number Of Hours\n";
cin>>h;
c=calculateCharges(h);
cout<<"\nCharges Are\t"<<c;
system("pause");
return 0;
}
float calculateCharges(float n)
{float ch=2;
if(n<=3)
{ch=2;
}
else if(n==12)
{ch=10;
}
else 
{int j;
for(j=3;j<n;j++)
{ch=ch+0.5;
}
}
return ch;
}
