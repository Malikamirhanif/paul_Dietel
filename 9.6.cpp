# include<iostream>
using namespace std;
class rational
{int n,d;
public:
	rational(int a=0,int b=0)
	{n=a;
	d=b;
	}
	void add(int a=0,int b=0,int c=0,int d=0)
	{int x=b*d;
	if(b==d)
	cout<<"\nSum is\t"<<(a*b)+(c*d)<<" /  "<<x;
	else
	cout<<"\nSum is\t"<<(a*d)+(c*b)<<" /  "<<x;
	}
	void sub(int a=0,int b=0,int c=0,int d=0)
	{int x=b*d;
	if(b==d)
	cout<<"\nDifference is\t"<<(a*b)-(c*d)<<" /  "<<x;
	else
	cout<<"\n Difference is\t"<<(a*d)-(c*b)<<" /  "<<x;
	}
	void mul(int a=0,int b=0,int c=0,int d=0)
	{cout<<"\nMultiplication is\t"<<a*c<<" / "<<b*d;
	}
	void div(int a=0,int b=0,int c=0,int d=0)
	{cout<<"\nDivision is\t"<<a/c<<" / "<<b/d;
	}
};
int main()
{rational o(2,4);
o.add(2,5,3,5);
o.sub(2,5,3,5);
o.add(2,5,3,7);
o.sub(2,5,3,7);
o.div(4,10,2,5);
o.mul(2,5,3,5);
system("pause");
return 0;
}
