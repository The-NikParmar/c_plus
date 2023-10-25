#include<iostream>
using namespace std;
class addition{
	
	int arr[5];
	public:
		void get()
		{
			int i;
			
			cout<<"enter total 5 values"<<endl;
			for(i=0;i<5;i++)
			{
				cout<<" ";
				cin>>arr[i];
			}
		}
		
		void display()
		{
			int i;
			cout<<" ";
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
		}
		
		void operator +(addition obj)
		{
			int i;
			int result[5];
			for(i=0;i<5;i++)
			{
				result[i]=arr[i]+obj.arr[i];
			}
			for(i=0;i<5;i++)
			{
				cout<<result[i]<<"\t";
			}
			
		}

		
};
int main()
{
	addition arr1,arr2;
	arr1.get();
	arr2.get();
	cout<<"displaying array's";
	arr1.display();
	cout<<endl;
	cout<<"second matrix";
	arr2.display();
	cout<<endl;
	cout<<"result is"<<"\t";
	arr1+arr2;
	
	return 0;
}
