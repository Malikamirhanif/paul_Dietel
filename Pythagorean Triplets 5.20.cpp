# include<iostream>
# include<math.h>
using namespace std;
int main()
{int i,j,k;
for(i=1;i<=500;i++)
{for(j=1;j<=500;j++)
{for(k=1;k<=500;k++)
if(sqrt(i*i)==sqrt((j*j)+(k*k)))
{cout<<"\nYes at\t hyp"<<i<<"  base "<<j<<"  per  "<<k;
}
}
}
system("pause");
return 0;
}
