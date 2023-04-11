# include<iostream>
# include<string>
class B
{int x,y,z;
public:
	void bm (int y,int z)
	{x=(y)/(z*z);
	std::cout<<"\nBody Mass Index is\t"<<x;
	}
};
