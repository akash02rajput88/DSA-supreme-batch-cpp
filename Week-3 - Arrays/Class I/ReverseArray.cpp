#include<iostream>
using namespace std;

//Approach-1 : using inbuild swap() method
/*
int main()
{
	int arr[7] = {1, 2, 5, 6 , 7, 9, 8 };
	int size = 7;

	int start = 0;
	int end = size - 1;

	while(start <= end) {
		swap(arr[start] , arr[end]);
		start++;
		end--;
	}
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
}
*/

//Approach-2 : using XOR
int main()
{
	int arr[7] = {1, 2, 5, 6 , 7, 9, 8 };
	int size = 7;

	int start = 0;
	int end = size - 1;

	/*while(start < end){
		arr[start] -= arr[end];
		arr[end] -= arr[start];
		arr[start] -= arr[end];
		start++;
		end--;
	}*/	

	while(start < end){
		arr[start] ^= arr[end];
		arr[end] ^= arr[start];
		arr[start] ^= arr[end];
		start++;
		end--;
	}
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
}

//int swap(int arr[], int start, int end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//	}