# include<iostream>
using namespace std;
int main()
{int i=0,j=0,k=0,l=0;
while(i<5)
{if(i==0 ||i==4)
{while(j<5)
{cout<<"*";
j++;}
}
j=0;
if(i>0&&i<4)
{while(k<3)
{cout<<"*   *";
k++;
cout<<"\n"
;}
}
if(i==4||i==0)
cout<<"\n";
i++;}
system("pause");
return 0;
}
