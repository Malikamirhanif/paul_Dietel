# include<iostream>
void b (int & a[5])
;using namespace std;
int main()
{int ar[5];
cout<<"\nEnter Elements In Array\n";
int i;
for(i=0;i<5;i++)
cin>>ar[i];
b(ar);
cout<<"\nNow Showing Results\n";
for(i=0;i<5;i++)
cout<<ar[i];
system("pause");
return 0;
}
void b(int *a[5])
{int j;
for(j=0;j<5;j++)
{a[j]*2;
}
}
