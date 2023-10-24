#include<iostream>
using namespace std;
class bank{
	string name;
	int Accno;
	string acctype;
	float bal;
	
	public:
		
	void get()
	{
		cout<<"\nEnter your Name:";
		cin>>name;
		cout<<"\nenter your Account number:";
		cin>>Accno;
		cout<<"\nEnter your Account Type:";
		cin>>acctype;
		cout<<"\n enter your balance";
		cin>>bal;
	}
	float deposit()
	{
		float d_amt;
		cout<<"\n enter your deposit amount";
		cout<<"\n enter your Amount";
		cin>>d_amt;
		bal=bal+d_amt;
		return bal;
	}
	float withdrw()
	{
		float amt;
		cout<<"\nHow many repees withdraw";
		cin>>amt;
		if(amt<=bal)
		{
			bal=bal-amt;	
		}
		else
		{
			cout<<"infulince balance";
		}
		
		return bal;
	}
	void display()
	{
		cout<<"cust name is "<<name;
		cout<<"cust bal"<<bal;
	}
};
int main()
{
	
	bank b1;
	

	
	b1.get();
	b1.deposit();
	b1.withdrw();
	b1.display();
	return 0;
}
