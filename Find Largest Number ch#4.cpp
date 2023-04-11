# include<iostream>
using namespace std;
int main()
{int n,c=0,l=0;
while(c<10)
{
cout<<"\nEnter A Number\n";
cin>>n;
if(n>l)
{l=n;
}
c++;
}
cout<<"\nLargest Number is\t"<<l;
system("pause");
return 0;
}
