# include<iostream>
# include<string>
class Date
{int yy,mm,dd;
public:
	Date(int y1,int m1,int d1)
	{
	yy=y1;
	if(m1<=12)
	{
	mm=m1;}
	else
	{mm=1;
	}
	if(d1<=31)
	{
	dd=d1;}
	else
	{dd=1;
	}
	}
	void set (int y1,int m1,int d1)
	{	yy=y1;
	if(m1<=12)
	{
	mm=m1;}
	else
	{mm=1;
	}
	if(d1<=31)
	{
	dd=d1;}
	else
	{dd=1;
	}
	}
	void disp(void)
	{std::cout<<"\n"<<yy<<"/"<<mm<<"/"<<dd;
	}
	
};
