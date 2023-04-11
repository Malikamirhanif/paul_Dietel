# include<iostream>
# include<string>
class Thr
{std::string name;
int dy,dm,dd;
int cy,cm,cd;
int ty,tm,td;
int sy,sm,sd;
int x,y,z;
public:
	Thr (std::string n,int dyo,int dmo,int ddo,int cyo,int cmo,int cdo)
	{name=n;
	dy=dyo;
	dm=dmo;
	dd=ddo;
	cy=cyo;
	cm=cmo;
	cd=cdo;
	}
	void set (std::string n,int dyo,int dmo,int ddo,int cyo,int cmo,int cdo)
	{name=n;
	dy=dyo;
	dm=dmo;
	dd=ddo;
	cy=cyo;
	cm=cmo;
	cd=cdo;
	}
	void Age (void)
	{td=(30-td)+cd;
	ty=(cy-1)-(dy+1);
	tm=(dm+1)+cm;
	if(td>=30)
	{sm=td/30;
	td=td%30;
	tm=tm+sm;
	}
	if(tm>=12)
	{sy=tm/12;
	tm=tm%12;
	ty=ty+sy;
	std::cout<<"\nAge is\t"<<td<<"/"<<tm<<"/"<<ty;
std::cout<<"\nYOur Target Heart Rate is\t"<<220-ty;	}
	}
void bm (int y,int z)
	{x=(y)/(z*z);
	std::cout<<"\nBody Mass Index is\t"<<x;
	}
};
