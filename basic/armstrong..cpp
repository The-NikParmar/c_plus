#include<iostream>
using namespace std;
int main()
{
	int num,org,rem,resu=0;
	cout<<"enter your digit";
	cin>>num;
	org=num;
	
	while(org!=0)
	{
		rem=org%10;
		
		resu=(rem*rem*rem)+resu;
		org/=10;
	}
	
    if (resu == num)
        cout<<"this is armstromg"<<num;
    else
        cout<<"this is not armstrong"<<num;
	return 0;
}
