# include<iostream>
# include<cstdlib>
# include<ctime>
using namespace std;
unsigned int toss();
int main()
{int h=0,t=0;
enum status {TAIL,HEAD};
srand(static_cast<unsigned int>(time(0)));
status my=HEAD;
int i=0;
while (i!=100)
{
unsigned int c=toss();
switch (c)
{case 1:
	my=HEAD;
	h++;
	break;
	case 0:
		my=TAIL;
t++;
break;

}

i++;}
cout<<"\nTotal HEAD\t"<<h;
cout<<"\nTotal TAIL\t"<<t;
system("pause");
return 0;
}
unsigned int toss()
{unsigned t=0+rand()%1;
return t
;}
