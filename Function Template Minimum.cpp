# include<iostream>
using namespace std;
template <typename T>
T max(T v1,T v2,T v3)
{T maxi=v1;
if(v2<maxi)
maxi=v2;
if(v3<maxi)
maxi=v3;
return maxi;
}
int main()
{int a,b,c,x
;
cout<<"\nEnter Three Number\n";
cin>>a>>b>>c;
x=(a,b,c);
cout<<"\nMinimum Is For Integers\t"<<x;
float d,e,f,y;
cout<<"\nEnter Three Float Number\n";
cin>>d>>e>>f;
y=(d,e,f);

cout<<"\nMinimum Is For Float\t"<<y;
char g,h,i,z
;
cout<<"\nEnter Three Alphabets\n";
cin>>g>>h>>i;
z=(g,h,i);
cout<<"\nMinimum Is For Integers\t"<<z;
system("pause");
return 0;
}
