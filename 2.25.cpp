# include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"\n\tEnter Two Number\n";
cin>>a>>b;
if(a>b)
{
if(a%b==0)
cout<<"Multiple";
}
if(b>a)
{if(b%a==0)
cout<<"Multiple";
}
system("pause");
return 0;

}

