# include<iostream>
# include<string>
# include"Invoice.h"
using namespace std;
int main()
{string num,des;
int co,am;
cout<<"\nEnter Descripition of Item\n";
getline(cin,des);
cout<<"\nEnter Quantity of Items\n";
cin>>co;
cout<<"\nEnter Price of Items\n";
cin>>am;
Invoice o(des,co,am);
cout<<"\nNow For Setting\n";
cout<<"\nEnter Number of Invoice\n";
getline(cin,num);
cout<<"\nEnter Descripition of Item\n";
getline(cin,des);
cout<<"\nEnter Quantity of Items\n";
cin>>co;
cout<<"\nEnter Price of Items\n";
cin>>am;
o.set(num,des,co,am);
cout<<"\nYour Data Is\n";
o.get();
cout<<"\nAmount of Invoice  Is\t"<<o.getinvoiceamount();
system("pause");
return 0;

}
