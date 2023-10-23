// oop
// class and object

#include<iostream>
using namespace std;
class student{
	public:// access spcefier 3 types public : private  protected:iheriance
	
	int roll_no;//data member
	private:
		void info()//member function
		{
			//statments
		}
};
int main()
{
	student s1;//object
	s1.roll_no=9;
	cout<<s1.roll_no;
	return 0;
}
