# include<iostream>
using namespace std;
int main()
{float to,t,h,f,c,e,hc,v;
cout<<"\nEnter Expecces For Housing\n";
cin>>h;
cout<<"\nEnter Expecces For Food\n";
cin>>f;
cout<<"\nEnter Expecces For Clothing\n";
cin>>c;
cout<<"\nEnter Expecces For Transport\n";
cin>>t;
cout<<"\nEnter Expecces For Education\n";
cin>>e;
cout<<"\nEnter Expecces For Health Care\n";
cin>>hc
;cout<<"\nEnter Expecces For Vacations\n";
cin>>v;
to=h+f+c+t+e+hc+v;
t=to*0.30;
cout<<"\nTotal Expences Are\t"<<to;
cout<<"\nTax is\n"<<t;
system("pause");
return 0;
}
