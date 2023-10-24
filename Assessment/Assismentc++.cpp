#include<iostream>
using namespace std;
class lnitial{
	
	protected:
	string lacturer_name,course,sub;
	int no_lacture;
	
	public:
	 void init()
	{
		cin>>course>>sub;
	}
     void	lecturers()
	{
		cin>>lacturer_name>>no_lacture;
	}
};
class display : public lnitial{
	
	public:
	 void demo()
	{
		cout<<"Course Name is :- "<<course;
		cout<<endl;
		
		cout<<"\nsubject is :- "<<sub;
		cout<<endl;
		
		cout<<"\nLacturer Name is :- "<<lacturer_name;
		cout<<endl;
		
		cout<<"\nNumber of Lactuer is :- "<<no_lacture;
		cout<<endl;
		
		cout<<"\n-------------------------------------------------------";
	}
};
int main()
{
	display d1[5];
	int i;
	cout<<"\n ----------------------  Welcome to  Lecture management System  ----------------------";
	cout<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter Course Name  &&  Subject Name  :-";
		d1[i].init();
		
		cout<<"\n Enter  lacturer Name && Number of Lecture :- ";
		d1[i].lecturers();
	}
	cout<<"\n ----------------------  Details Lecture management System  ----------------------";
	cout<<endl;
	for(i=0;i<5;i++)
	{	
		cout<<"\nDetails of lactures:- ";
		d1[i].demo();
	}
	
	return 0;
}
