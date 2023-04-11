 # include<iostream>
 # include<math.h>
using namespace std;
int main()
{float n,i=1,j=1,m=1,q=1,p,d;
float e=1;
cout<<"\nEnter Limit of Equation\n";
cin>>n;
cout<<"\nEnter Value Equation\n";
cin>>d;
while(i<=n)
{while(j<=q)
{m=m*j;
j++;
}
e=e+(pow(d,i)/m);
m=1;
j=1;
i++;
q++;
}

cout<<"\nValue is\t"<<e;
system("pause");
return 0;


cout<<"";
}
