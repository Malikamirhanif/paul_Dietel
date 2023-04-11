# include <iostream>
using namespace std;
class complex
{double r,i;
public:
	complex(double a=0,double b=0)
	{r=a;
	i=b;
	}
	void add(double a,double b,double c,double d)
	{r=a+c;
	i=b+d;
	}
	void sub(double a,double b,double c,double d)
	{r=a-c;
	i=b-d;
	}
	void print ()
	{cout<<"\nReal Number\t"<<r;
	cout<<"\nImaginary Number\t"<<i;
	}
};
int main()
{complex o(5,4);
complex o1(o);
cout<<"\nFirst Object\n";
o.add(2,3,4,5);
o.print();
o.sub(5,4,3,2);
o.print();
cout<<"\nSecond Object\n";
o1.add(1,2,3,4);
o1.print();
o1.sub(5,4,3,2);
o1.print();
system("pause");
return 0;
}
