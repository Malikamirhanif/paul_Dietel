 # include<iostream>
using namespace std;
int main()
{float n,i=1,j=1,m=1,q=1,p;
float e=1;
cout<<"\nEnter Limit of Equation\n";
cin>>n;
while(i<=n)
{while(j<=q)
{m=m*j;
j++;
}
e=e+(1/m);
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
