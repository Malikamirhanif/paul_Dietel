# include<iostream>
# include<string>
class Employee
{std::string nf;
std::string ns;
int ms;
public:
	Employee (std::string n1,std::string n2,int msl)
	{nf=n1;
	ns=n2;
	if(msl>0)
	{
	ms=msl;}
	else
	{ms=0;
	}
	}
	void set (std::string n1,std::string n2,int msl)
	{nf=n1;
	ns=n2;
	if(msl>0)
	{
	ms=msl;}
	else
	{ms=0;
	}
	}
	void disp (void)
	{std::cout<<"\nFirst Name is\n"<<nf;
	std::cout<<"\nSecond Name is\n"<<ns;
	int in;
	in=ms*0.1;
	ms=ms+in;
	std::cout<<"\nYearly Salary is\n"<<ms;
	}
};
