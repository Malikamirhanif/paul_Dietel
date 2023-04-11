# include<iostream>
# include<string>
class Account
{int b;
public:
	Account(int ba)
	{if(ba>=0)
	{b=ba;
	}
	else
	{b=0;
	std::cout<<"\nIntial Balance Is Invalid\n";
	}
	}
	void credit (int m)
	{b=b+m;
	}
	void debit (int n)
	{if(n<b)
	{b=b-n;
	}
	else
	{std::cout<<"\nDebit Amount is Exceed\n";
	}
	}
	int getbalance (void)
	{return b;
	}
};
