# include<iostream>
# include<cstdlib>
using namespace std;
int main()
{int a,p,r1,r2;
for(int i=0;i<10;i++)
{
r1=1+rand()%20;
r2=1+rand()%20;
p=r1*r2;
cout<<r1<<"\tMultiplies By\t"<<r2<<"\tGive Us\n";
cin>>a;
if(a==p)
{if(i%2==0)
{cout<<"\nVery Good!\n";
}
else if(i%3==0)
{cout<<"\nExcellent!\n";
if(i%5==0)
{cout<<"\nNice Work!\n";
}
else
{cout<<"\nKeep Up The Good Work!\n";
}
}
}
while(a!=p)
{if(i%2==0)
{cout<<"\nNo. Please Try Again!\n";
}
else if(i%3==0)
{cout<<"\nWorng, Try Once More!\n";
}
else if(i%5==0)
{cout<<"\nDon't Give Up!\n";
}
else
{cout<<"\nNo. Keep Trying!\n";
}
cout<<"\nPlease Try Again And Enter Your Answer\n";
cin>>a;
}}
cout<<"\nNow You Know How Multiply\n";
cout<<"\n\t\t\t\t\tThanx\n";
system("pause");
return 0;
}
