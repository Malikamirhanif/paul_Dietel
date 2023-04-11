# include<iostream>
using namespace std;
class T
{int s,m,h;
public:
	T(int a1=0,int b1=0,int c1=0)
	{
	 ss(a1);sm(b1); sh(c1);
	}
	void ss(int a)
	{if(a<=60)
	s=a;
	else
	s=0;
	}
	void sm(int b)
	{if(b<=60)
	m=b;
	else
	m=0;
	}
	void sh(int c)
	{if(c<=24)
	h=c;
	else
	h=0;
	}
	void show()
	{cout<<"\tHOURS:"<<h<<"\t\tMINUTES:"<<m<<"\t\tSECONDS:"<<s;
	}
	void next (void)
	{if(s<60)
	s++;
	if(s==60&&m<60)
	{m++;
	s=0;
	}
	if(m==60&&h<24)
	{h++;
	m=0
	;}
	if(h==24)
	{h=0;
	}
	}
};
int main()
{T o(59,59,23);
for(int i=0;i<20;i++)
{
o.show();
o.next();
cout<<"\n";
}
}
