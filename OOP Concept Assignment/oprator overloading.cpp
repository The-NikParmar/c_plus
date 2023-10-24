//operator overloading is compli time polymorphism
// oprator overloding gives functionally to the operator with out changing it's behavoiur
#include<iostream>
using namespace std;
class value{
	int no1;
	public:
		void get ()
		{
			cout<<"Enter value";
			cin>>no1;
		}
		void operator ++()
		{
			++no1;
		}
		void display()
		{
			cout<<"value is:"<<no1;
		}
};
int main()
{
	value v1;
	v1.get();
	++v1;
	v1.display();
	return 0;
}
