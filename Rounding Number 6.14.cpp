# include<iostream>
# include<math.h>
using namespace std;
float rni (float n);
float rnt (float n);
float rnh (float n);
float rnth (float n);
int main()
{float no,t;
cout<<"\nEnter Number To Round Off To Integers\n";
cin>>no;
t=rni(no);
cout<<"\nValue After Round Off Is\t"<<t;
cout<<"\nEnter Number To Round Off To Tenth\n";
cin>>no;
t=rnt(no);
cout<<"\nValue After Round Off Is\t"<<t;
cout<<"\nEnter Number To Round Off To Hundereds\n";
cin>>no;
t=rnh(no);
cout<<"\nValue After Round Off Is\t"<<t;
cout<<"\nEnter Number To Round Off To Thousands\n";
cin>>no;
t=rnth(no);
cout<<"\nValue After Round Off Is\t"<<t;
system("pause");
return 0;
}
float rni (float n)
{
float g;
g=floor (n+0.5);
return g;
}
float rnt (float n)
{
float g;
g=floor ((n*10)+0.5)/10;
return g;
}
float rnh (float n)
{
float g;
g=floor ((n*100)+0.5)/100;
return g;
}
float rnth (float n)
{
float g;
g=floor ((n*1000)+0.5)/1000;
return g;
}
