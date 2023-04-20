#include <iostream>
using namespace std;

//Ques: Given an array of intergers and key(num of element we can take at a time) find the maximun sum of the given array
int consecutiveElement(int arr[], int n , int key)
{
	int max_sum = INT32_MIN;
	for(int i=0; i+key-1<n; i++)
	{
		int sum = 0;
		for(int j=0; j<key; j++)
		{
			sum += arr[i+j];
			max_sum = max(sum, max_sum);
		}
	}
	return max_sum;
}

int main(int argc, char *argv[])
{
	int arr[] = {1, 8, 30, -5,	20, 7};
	int n = 6;
	int key = 3;
	
	int ans = consecutiveElement(arr, n, key);
	cout << ans << endl;
	
	return 0;
}
