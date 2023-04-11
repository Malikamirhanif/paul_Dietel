# include<iostream>
# include<stdlib.h>
using namespace std;
class Node
{int ob;
Node *Nnode;
public:
	void set(int obj)
	{ob=obj;
	}
	void setnext(Node *o)
	{Nnode=o;
	}
	int get()
	{return ob;
	}
	Node * getnext()
	{return Nnode
	;}
};
class List
{Node *cn;
Node *lcn;
Node *hn;
int size;
public:
	List()
	{Node *newnode=new Node;
	hn=newnode;
	hn->setnext(NULL);
	cn=NULL;
	lcn=NULL;
	size=0;
	}
	void add(int a)
	{Node *newnode=new Node;
	newnode->set(a);
	if(cn != NULL)
	{newnode->setnext(cn->getnext());
	cn->setnext(newnode);
	lcn=cn;
	cn=newnode;
	}
	else
	{newnode->setnext(NULL);
	hn->setnext(newnode);
	lcn=hn;
	cn=newnode;
	}
	size++;
	}
	bool next()
	{if(cn==NULL)
	return false;
	lcn=cn;
	cn=cn->getnext();
	if(cn==NULL || size==NULL)
	return false;
	else 
	return true;
	}
	void start()
	{lcn=hn;
	cn=hn;
	}
	int get()
	{if(cn != NULL)
	return cn->get();
	}
	
};
int main(int argc,char *argv[])
{List list;
Node n;
list.add(1);
list.add(11);
list.add(12);
list.add(13);
list.start();
while(list.next())
{cout<<"Value is\t"<<list.get()<<"\n";
}
system("pause");
return 0;
}
