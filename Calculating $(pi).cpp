# include<iostream>
using namespace std;
int main()
{int j=4,i,n;
float $=4.0;
cout<<"\n\n";
cout<<"\nEnter End Of Series\n";
cin>>n;
for(i=3;i<=n;i=i+2)
{if(i%2==0)
{$=$+(j/i);
}
else
{$=$-(j/i);
}
}
cout<<"\nValue is\t"<<$;
system("pause");
return 0;
}
