# include<iostream>
using namespace std;
class D
{int d,m,y;
public:
	D(int a=0,int b=0,int c=0)
	{sd(a);
	 sm(b);
	 sy(c);
	}
	void sd(int a1)
	{if(a1<32)
	{d=a1;
	}
	else
	d=0;
	}
	void sm(int b1)
	{if(b1<13)
	m=b1;
	else
	m=0;
	}
	void sy(int c1)
	{if(c1>=0)
	y=c1;
	else
	y=0;
	}
	void show(void)
	{cout<<"\nDATE:"<<d<<"/"<<m<<"/"<<y;
	}
	void inc (void)
	{if(d<=31)
	d++;
	if(d==31&&m<12)
	{
	m++;
	d=1;}
	if(m==12)
	{y++;
	m=0;
	}
	}
};
int main()
{D j(29,12,2018);
for(int i=0;i<10;i++)
{j.inc();
j.show();
}
system("pause");
return 0;
}
