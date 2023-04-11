# include<iostream>
# include<math.h>
using namespace std;
float mul (float a,float b);
int main()
{float s,so,h;
cout<<"\nEnter 1st Integers\n";
cin>>s;
cout<<"\nEnter 2nd Integers\n";
cin>>so;
h=mul(s,so);
if(h==1)
cout<<"\nAnswer  Is\t YES";
if(h==0)
cout<<"\nAnswer is\tNO";
system("pause");
return 0;
}
float mul (float a,float b)
{float ho;
if(fmod(b,a)==0)
return 1;
if(fmod(b,a)!=0)
return 0
;}
