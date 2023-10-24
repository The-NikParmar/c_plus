#include<iostream>
using namespace std;
class addition{
	public:
		int no1,no2;
		addition()
		{
			cout<<"\nEnter no1 = ";
			cin>>no1;
			cout<<"\nEnter no2 = ";
			cin>>no2;
			cout<<"\n"<<no1<<"+"<<no2<<"="<<no1+no2<<"\n";
		}
};
class substraction{
	public:
		int no1,no2;
		substraction()
		{
			cout<<"\nEnter no1 = ";
			cin>>no1;
			cout<<"\nEnter no2 = ";
			cin>>no2;
			cout<<"\n"<<no1<<"-"<<no2<<"="<<no1-no2<<"\n";
		}
};
class division{
	public:
		float no1,no2;
		division()
		{
			cout<<"\nEnter no1 = ";
			cin>>no1;
			cout<<"\nEnter no2 = ";
			cin>>no2;
			cout<<"\n"<<no1<<"/"<<no2<<"="<<no1/no2<<"\n";
		}
};
class multiplication{
	public:
		int no1,no2;
		multiplication()
		{
			cout<<"\nEnter no1 = ";
			cin>>no1;
			cout<<"\nEnter no2 = ";
			cin>>no2;
			cout<<"\n"<<no1<<"*"<<no2<<"="<<no1*no2<<"\n";
		}
};
int main()
{
	int ch;
	cout<<"-------select following-------";
	cout<<"\n(1) --> for addition";
	cout<<"\n(2) --> for substraction";
	cout<<"\n(3) --> for division";
	cout<<"\n(4) --> for multiplication";
	cout<<"\n-----------------------------";
	cout<<"\nenter your choice = ";
	cin>>ch;
	if(ch==1)
	{
		addition a;
	}
	else if(ch==2)
	{
		substraction s;
	}
	else if(ch==3)
	{
		division d;
	}
	else if(ch==4)
	{
		multiplication m;
	}
	else
	{
		cout<<":: invalid input ::";
	}
	return 0;
}
