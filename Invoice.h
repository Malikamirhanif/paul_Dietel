# include<iostream>
# include<string>
class Invoice
{std::string number;
std::string desc;
int qnt;
int prc;
public:
	Invoice(std::string d,int q,int p)
	{
	desc=d;
	if(q>0)
	{
	qnt=q;}
	else
	{q=0;
	}
	if(p>0)
	{
	prc=p;}
	else
	{prc=0;
	}
	}
	void set (std::string n,std::string deo,int qo,int po)
	{number=n;
	desc=deo;
	if(qo>0)
	{
	qnt=qo;}
	else
	{qnt=0;
	}
	if(po>0)
	{
	prc=po;}
	else
	{prc=0;
	}
	}
	void get (void)
	{std::cout<<"\nInvoice Number is\n"<<number;
	std::cout<<"\nDescription of Item is\n"<<desc;
	std::cout<<"\nQuantity is\n"<<qnt;
	std::cout<<"\nPrive is\n"<<prc;
	}
	int getinvoiceamount (void)
	{return (qnt*prc);	}
};
