#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int arr[] = {91, 67, 45, 73, 15, 44, 39, 31, 11};
	int size = 9;

	int min = arr[0];

	for(int i = 0; i < size ; i++){
		if(arr[i] < min)
		{
			min  = arr[i];
		}
	}
	cout << min;
	
	return 0;
}
