// encapsulation is process of biding data and function together
// encapusulation involves combining similar data and functions into singal unit called a class.
// by encapusulation these functions and data. we protect that data from chage. this concept is also know as data and information hiding.

#include<iostream>
using namespace std;
class employee{
	
	int id;
	
	public:
		
		void get()
		{
			cout<<"enter id";
			cin>>id;
		}
		void display()
		{
			cout<<"id is "<<id;
		}
};
int main()
{
	employee e1;
	e1.get();
	e1.display();
	return 0;
}

