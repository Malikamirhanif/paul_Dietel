# include<iostream>
using namespace std;
int main()
{cout<<"BMI VALUES\n";
cout<<"Underweight:\t"<<"Less Than "<<18.5<<"\n";
cout<<"Nirmal:\t"<<"Between "<<18.5<<"  and  "<<24.9<<"\n";
cout<<"Overweight:\t"<<"Between "<<25<<" and "<<29.5<<"\n";
cout<<"Obses:\t"<<"30 or greater"<<"\n";
float mk,lm,b;
cout<<"Enter Mass in Kg AND Height in meters\n";
cin>>mk>>lm;
b=(mk)/(lm*lm);
cout<<"\nYour BMI is\t"<<b;
system("pause");
return 0;

}
