# include<iostream>
using namespace std;
float sm(float a,float b,float c);
int main()
{float a,b,c,d;
cout<<"\nEnter Three Numbers\n";
cin>>a>>b>>c;
d=sm(a,b,c);
cout<<"Smallest Of Three Number Is\t"<<d;
system("pause");
return 0;
}
float sm(float a,float b,float c)
{float s;
s=a;
if(b<s)
s=b;
if(c<s)
s=c;
return s;
}
