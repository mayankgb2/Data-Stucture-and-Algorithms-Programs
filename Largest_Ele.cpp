#include<iostream>
using namespace std;
int getLargest(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		bool flag=true;
		for(int j=0; j<n; j++)
		{
			if(arr[j]>arr[i])
			{
				flag=false;
				break;
			}
		}
		if(flag==true)
		return i;
	}
	return -1;
}
int main()
{
	int arr[] = {5,10,14,78,6};
	cout<<getLargest(arr,5);
	return 0;
}

/*OUTPUT*/
3
