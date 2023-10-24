/*

 Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) 

*/
#include<iostream>
using namespace std;
// person class get person detail age and name 
class person
{
	int age;
	string name;
	public:
	// get function is get person detail some age and name.
	 void get_person()
	 {
	 	cout<<"\nEnter your Name : ";
	 	cin>>name;
	 	cout<<"\nEnter your Age : ";
	 	cin>>age;
	 }
	 // display function is display person details name and age.
	 void dipslay_person()
	 {
	 	cout<<"\nName is:- "<<name;
	 	cout<<"\nAge is :- "<<age;
	 }
};
// student class having data Member is percentage and mem function is get and display
class student
{
	float percentage;
	public:
	void get_student()
	{
		cout<<"\nenter Student percentage : ";
		cin>>percentage;
	}
	void display_student()
	{
		cout<<"\nStudent Percentage is:- "<<percentage;
	}
};
class teacher : public student,public person
{
	int salary;
	public:
	void get_teacher()
	{
		cout<<"\nEnter Salary";
		cin>>salary;
	}
	void display_teacher()
	{
		cout<<"\nTeacher Salary is:-"<<salary;
	}
};
int main()
{
	teacher t1;
	t1.get_person();
	t1.get_student();
	t1.get_teacher();
	t1.dipslay_person();
	t1.display_student();
	t1.display_teacher();
	
	return 0;
}
