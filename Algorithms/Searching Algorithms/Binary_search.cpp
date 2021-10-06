#include <iostream>
using namespace std;
int main()
{
int n;
int start,end,mid;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ele;
	cout<<"element to be searched";
	cin>>ele;
	while(start<=end)
	{
		mid= (start+end)/2;
		start = a[0];
		end = a[n-1];
		if(ele==mid)
		{
			cout<<"element found at index"<<mid-1;
			break;
		}
		else if(ele>mid)
		{
			start = mid+1;
		}
		else if(ele<mid)
		{
			end = mid - 1;
		}
	}
	return 0;
}
