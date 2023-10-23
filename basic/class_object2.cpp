#include<iostream>
using namespace std;
class student{
	int roll_no;
	string name;
	float pr;
	char division;
	
	public:
		void get()//getter
		{
			cout<<"enter roll no and name";
			cin>>roll_no>>name;
			cout<<"\n enter percantage and division";
			cin>>pr>>division;
		}
		void display()
		{
			cout<<"student's name is "<<name<<"roll number is"<<roll_no<<"percentage"<<pr<<"division is "<<division;
		}
};
int main()
{
	student s1;
	s1.get();
	s1.display();
	return 0;
}
