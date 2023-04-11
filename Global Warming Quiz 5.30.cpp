# include<iostream>
using namespace std;
int main()
{char q1,q2,q3;
int t=0;
for(int i=1;i<=5;i++)
{
cout<<"\n (Q.1) We Should Avoid Throwing Outside\n";
cout<<"(A) Garbage\n";
cout<<"(B) Water\n";
cout<<"\n(C)Bread\n";
cout<<"\n(D) Fruit\n";
cin>>q1;
switch(q1)
{case 'A':
case 'a':
t++;	
}
cout<<"\n (Q.2) We Should Avoid From\n";
cout<<"(A) Water\n";
cout<<"(B) Smoking\n";
cout<<"\n(C)Brushing\n";
cout<<"\n(D) Fruit\n";
cin>>q2;
switch(q2)
{case 'B':
case 'b':
t++;	
}
cout<<"\n (Q.3) We Should Avoid Expose In Air\n";
cout<<"(A) Smoke\n";
cout<<"(B) Breath\n";
cout<<"\n(C) Light\n";
cout<<"\n(D) Fruit\n";
cin>>q3;
switch(q3)
{case 'C':
case 'c':
t++;	
}}
if(t>=10)
{cout<<"\nOutstanding Performance\n";
}
else if(t>=7)
{cout<<"\nBest Performance\n";
}
else if(t>=5)
{cout<<"\nSaticfactory Performance\n";
}
else
{cout<<"\nPoor Performance\n";
}

system("pause");
return 0;
}
