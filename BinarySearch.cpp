#include<iostream>
using namespace std;
class Binary
{
	short int list[30];
	short unsigned int N;
	void search();
	public:
		Binary();
		
};
Binary::Binary()
{
	cout<<"Enter the number of elements"<<endl;
	cin>>N;
	cout<<"Enter the elements in the array"<<endl;
	for(int i=0;i<N;i++)
	{
		cin>>list[i];
	}
	search();
}
void Binary::search()
{
	int num,lb=0,ub=N-1,mid,flag=0;
	cout<<"Enter the element to be searched"<<endl;
	cin>>num;
	for(mid=(lb+ub)/2;lb<=ub;mid=(lb+ub)/2)
	{
		if(num==list[mid])
		{
			flag =1;
			break;
		}
		else if(num<list[mid])
		{
			ub=mid-1;
		}
		else
		{
			lb=mid+1;
		}
		
	}
	if(flag==1)
	cout<<"Element found at position: "<<mid+1<<endl;
	else
	cout<<"Element not found"<<endl;
}
int main()
{
	Binary B;
}
