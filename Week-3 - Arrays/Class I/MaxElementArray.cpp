#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int arr[] = {12, 45, 67, 45, 34, 23};
	int size = 6;

	int max = arr[0];

	for(int i = 0; i < size ; i++){
		if(arr[i] > max)
		{
			max  = arr[i];
		}
	}
	cout << max;
	
	return 0;
}
