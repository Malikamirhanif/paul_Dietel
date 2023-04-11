# include<iostream>
# include<math.h>
using namespace std;
float Even (float a);
int main()
{float s,so,h;
int i;
for(i=0;i<5;i++)
{
cout<<"\nEnter Integers\n";
cin>>s;
h=Even(s);
if(h==1)
cout<<"\nAnswer Is  \tYes";
else
cout<<"\nAnswer is\tNo";
}
system("pause");
return 0;
}
float Even (float a)
{float ho;
if((fmod(a,2))==0)
return 1;
else
return 0;
}
