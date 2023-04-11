# include<iostream>
# include<cstdlib>
using namespace std;
int main()
{float a,p,r1,r2;
cout<<"\n(1).Enter 1 For Addition Problems \n(2).Enter 2 For Subtraction\n(3).Enter 3 For Multiplication\n(4).Enter 4 For Division\n(5).Enter 5 For Random Mixture Of All Of These\n";
int an;
cin>>an;
switch (an)
{case 1:
	{float aa;
	for(int i=0;i<10;i++)
	{
	r1=1+rand()%9;
	r2=1+rand()%9;
	cout<<r1<<"\tPlus\t"<<r2<<"\tGive us\n";
	cin>>aa;
	if(aa==(r1+r2))
cout<<"\nYES.\n";
else
cout<<"\nNO.\n";
	}}
	break
;case 2:
	{float as;
	for(int i=0;i<10;i++)
	{
	r1=1+rand()%9;
	r2=1+rand()%9;
	cout<<r1<<"\tSubtracted From\t"<<r2<<"\tGive us\n";
	cin>>as;
	if(as==(r1-r2))
cout<<"\nYES.\n";
else
cout<<"\nNO.\n";
	}}
	break;
	case 3:
	{float am;
	for(int i=0;i<10;i++)
	{
	r1=1+rand()%9;
	r2=1+rand()%9;
	cout<<r1<<"\tMultiplyed\t"<<r2<<"\tGive us\n";
	cin>>am;
	if(am==(r1*r2))
cout<<"\nYES.\n";
else
cout<<"\nNO.\n";
	}}
	break;
	case 4:
	{float ad,cd=1,b=0;
	for(int i=0;i<10;i++)
	{while(cd==1)
	{
	r1=1+rand()%9;
	r2=1+rand()%9;
	if(r2<r1)
	{b++;
	cout<<r1<<"\tDivided By\t"<<r2<<"\tGive us\n";
	cin>>ad;
	if(ad==(r1/r2))
cout<<"\nYES.\n";
else
cout<<"\nNO.\n";}
if(b==9)
cd=0;	}}}
break;
case 5:
	{int i;
	for(int i=0;i<10;i++)
	{if(i%2==0)
	{float aa;
	
	r1=1+rand()%9;
	r2=1+rand()%9;
	cout<<r1<<"\tPlus\t"<<r2<<"\tGive us\n";
	cin>>aa;
	if(aa==(r1+r2))
cout<<"\nYES.\n";
else
cout<<"\nNO.\n";
	}
	
else	if(i%3==0)
	{float as;
	r1=1+rand()%9;
	r2=1+rand()%9;
	cout<<r1<<"\tSubtracted From\t"<<r2<<"\tGive us\n";
	cin>>as;
	if(as==(r1-r2))
cout<<"\nYES.\n";
else
cout<<"\nNO.\n";
	}
	
	else if(i%5==0)
	{float am;
	r1=1+rand()%9;
	r2=1+rand()%9;
	cout<<r1<<"\tMultiply\t"<<r2<<"\tGive us\n";
	cin>>am;
	if(am==(r1*r2))
cout<<"\nYES.\n";
else
cout<<"\nNO.\n";
	}
	
	else if(i%7==0)
{
		float ad,cd=1,b=0;
	
	r1=1+rand()%9;
	r2=1+rand()%9;
	if(r2>r1)
	{b++;
	cout<<r1<<"\tDivided By\t"<<r2<<"\tGive us\n";
	cin>>ad;
	if(ad==(r1/r2))
cout<<"\nYES.\n";
else
cout<<"\nNO.\n";}
if(b==9)
cd=0;	}
	
	}
	}
}
system ("pause");
return 0;
}
