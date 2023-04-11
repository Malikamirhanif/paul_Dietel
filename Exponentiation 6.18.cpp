# include<iostream>
# include<math.h>
int intpower (int no,int po);
using namespace std;
int main()
{int n,p,t;
cout<<"\nEnter Number\n";
cin>>n;
cout<<"\nEnter Power\n";
cin>>p;
t=intpower(n,p);
cout<<"\nValue Is\t"<<t;
system("pause");
return 0;
}
int intpower(int no,int po)
{int i,g=1;
for(i=0;i<po;i++)
{g=g*no;}
return g;
}

