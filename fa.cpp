# include<iostream>
# include<cstdlib>
using namespace std;
int main()
{
for(int i=0;i<4;i++)

{
int a=0+rand()%4;
if(a==0)
cout<<"\nVery Good";
else if(a==1)
cout<<"\nExcellent";
else if(a==2)
cout<<"\nWELL DONE";
else if(a==3)
cout<<"\nGood";
else if(a==4)
cout<<"\nKeep It Up";
}

return 0;
}
