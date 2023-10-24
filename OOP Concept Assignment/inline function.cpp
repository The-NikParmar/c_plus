#include<iostream>
using namespace std;
inline int mul(int no1,int no2)// inline function
{
	return no1*no2;
}
inline int cub(int no)
{
	return no*no*no;
}
int main()
{
	cout<<"Multipilication:-  "<<mul(2,5);
	cout<<"\ncubic:-  "<<cub(3);
	return 0;
}
