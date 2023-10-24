#include<iostream>
using namespace std;
int Mathematic(int no1,int no2)
{
	return no1+no2;
}
int Mathematic(double no1,double no2)
{
	return no1-no2;
}
int Mathematic(int no1,double no2)
{
	return no1*no2;
}
int Mathematic(double no1,int no2)
{
	return no1/no2;
}
int main()
{
	cout<<"The Additon is:- "<<Mathematic(10,20);
	cout<<"\n The Subtraction is:-  "<<Mathematic(50.0,23.0);
	cout<<"\n The Multiplication:-  "<<Mathematic(10,20.0);
	cout<<"\n The Division is:-  "<<Mathematic(35.0,20);
	
	return 0;
}
