#https://www.facebook.com/permalink.php?story_fbid=103039851600105&id=100056822710327
$Subscribed by Sonali Gupta

//Find the largest and smallest number in an unsorted integer array?
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	int min_ele = arr[0];
	int max_ele = arr[0];
	for(int i = 1; i < n; i++)
	{
		if(arr[i] < min_ele)
			min_ele = arr[i];
		
		if(arr[i] > max_ele)
			max_ele = arr[i];
	}
	cout << min_ele << " ";
	cout << max_ele;
