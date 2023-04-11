# include<iostream>
using namespace std;
int main()
{int a,i,sm;
cout<<"\nEnter A Number\n";
cin>>a;
sm=a;
for(i=a;i>0;i--)
{cout<<"\nEnter A Number\n";
cin>>a;
if(a<sm)
sm=a;
}
cout<<"\nSmallest A Number is\t"<<sm;
system("pause");
return 0;
}
