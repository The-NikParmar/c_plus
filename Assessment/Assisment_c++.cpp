
#include<iostream>
using namespace std;
class details{
	string name_lecturer[5];
	string name_subject[5];
	string name_course[5];
	int number_lecturers[5];
	public:
		details()
		{
				cout<<"---------- Welcome to lecture management system ----------\n";
				cout<<"----------------------------------------------------------\n";	
		}
		void getdata()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"Enter name of "<<i+1<<" lecturer :";
				cin>>name_lecturer[i];
				cout<<"Enter name of subject :";
				cin>>name_subject[i];
				cout<<"Enter name of course :";
				cin>>name_course[i];
				cout<<"Enter number of lecturers :";
				cin>>number_lecturers[i];		
			}
		}
		void display()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"Lacturer Name is :- "<<name_lecturer[i];
				cout<<endl;
		
				cout<<"subject is :- "<<name_subject[i];
				cout<<endl;
				
				cout<<"Course Name is :- "<<name_course[i];
				cout<<endl;
		
				cout<<"Number of Lactuer is :- "<<number_lecturers[i];
				cout<<endl;
				cout<<"-----------------------------\n";
			}
		}
};
int main()
{
	details d;
	d.getdata();
	cout<<"---------- Details of lecture management system ----------\n";
	d.display();
	return 0;
}
