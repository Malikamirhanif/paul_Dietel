# include<iostream>
# include<math.h>
using namespace std;
float hyp (float a,float b);
int main()
{float s,so,h;
cout<<"\nEnter Base\n";
cin>>s;
cout<<"\nEnter Perpendicular\n";
cin>>so;
h=hyp(s,so);
cout<<"\nHypotenous  Is\t"<<h;
system("pause");
return 0;
}
float hyp (float a,float b)
{float ho;
ho=sqrt(a*a)+sqrt(b*b);
return ho;
}
