# include<iostream>
using namespace std;
int main()
{int max=0,min=0,mid=0,a,b,c,d=0;
while(d<3)
{cout<<"\nEnter Side\n";
cin>>a;
cout<<"\nEnter Side\n";
cin>>b;
cout<<"\nEnter Side\n";
cin>>c;
if(a>b&&a>c)
{
if((a*a)==(b*b)+(c*c))
{
cout<<"\nYes\t";}
else
{
cout<<"\nNo\t";}}
if(c>b&&c>a)
{
if((c*c)==(b*b)+(a*a))
{
cout<<"\nYes\t";}
else
{
cout<<"\nNo\t";}}
if(b>a&&b>c)
{
if((b*b)==(a*a)+(c*c))
{
cout<<"\nYes\t";}
else
{
cout<<"\nNo\t";}}}
system("pause");
return 0;

}
