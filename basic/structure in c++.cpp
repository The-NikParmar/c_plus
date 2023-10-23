#include<iostream>
using namespace std;
struct stu{
	int rollno;
	float  pr;
	char name[100];
}s;
int main()
{

	cout<<"enter your roll no";
	cin>>s.rollno;
	
	cout<<"enter your name";
	cin>>s.name;
	
	
	cout<<"enter your pr";
	cin>>s.pr;
	
	
	
	cout<<s.rollno<<"\n";
	cout<<s.name<<"\n";
	cout<<s.pr<<"\n";
	
	return 0;
}
