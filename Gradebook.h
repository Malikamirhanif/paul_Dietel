# include<iostream>
# include<string>
class Gradebook
{std::string cname;
std::string iname;
public:
	void set (std::string m)
	{iname=m;
	}
	std::string get (void)
	{return iname;
	}
	 Gradebook (std::string p,std::string q)
	{
	cname=(p);
	iname=(q);
	
	}
	void disp (void)
	{std::cout<<"\n\tInstructor Name Is\t"<<get();
	std::cout<<"\n\tCourse Name Is\t"<<cname;
	}
};
