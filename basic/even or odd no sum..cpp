#include<iostream>
using namespace std;
int main()
{
	int i,end,sum=0,no[10],sum1=0;
	cout<<"enter your end point";
	cin>>end;
	cout<<"enter your numbers\n";
	for(i=0;i<end;i++)
	{
		cin>>no[i];
	}
	cout<<"print the your numbers\n";
	for(i=0;i<end;i++)
	{
		cout<<no[i]<<"\t";
	}
	for(i=0;i<end;i++)
	{
		if(no[i]%2==0)
		{
			sum = sum+i;
		}
		else
		{
			sum1 = sum1+i;
		}
	}
	cout<<"\nthe sum of even Numbers:-  "<<sum;
	cout<<"\nthe sum of odd Numbers:- "<<sum1;
	return 0;
}
