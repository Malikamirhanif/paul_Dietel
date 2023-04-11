# include<iostream>
# include<math.h>
using namespace std;
float rn (float n);
int main()
{float no,t;
cout<<"\nEnter Number To Round Off\n";
cin>>no;
t=rn(no);
cout<<"\nValue After Round Off Is\t"<<t;
system("pause");
return 0;
}
float rn (float n)
{
float g;
g=floor (n+0.5);
return g;
}
