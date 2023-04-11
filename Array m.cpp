# include<iostream>
void  b (int &y[5]);
using namespace std;
int main()
{int a[5];
cout<<"\nEnter Elements In Array\n";
int i;
for(i=0;i<5;i++)
cin>>a[i];
int ar[5];
b(a);
for(i=0;i<5;i++)
cout<<"  "<<a[i];
system("pause");
return 0;
}
void  b (int &y[5])
{int j;
for(j=0;j<5;j++)
{y[j]*3;
}
return y[0];
}
