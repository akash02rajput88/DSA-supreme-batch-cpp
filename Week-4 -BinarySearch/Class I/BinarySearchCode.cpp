#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int binarySearch(int arr[],  int size, int target)
{
	int start = 0;
	int end = size -1;
	int mid = start + (end - start) / 2;

	while(start <= end)
	{
		int element = arr[mid];

		if  (target == element) //element found, then return index
		{
			return mid;
		}
		if (target < element) //search in left
		{
			end = mid - 1;
		}
		else //search in right
		{
			start = mid + 1;
		}
		mid = start + (end - start) / 2;

	}
	//if element not found
	return -1;
}

int main(int argc, char *argv[])
{
	int arr[] = {1, 12, 23, 44, 54, 66, 77, 89};
	int size = 8;

	int target  = 77;

	int indexOfTarget = binarySearch(arr, size, target);

	if(indexOfTarget == -1)
	{
		cout << "Target Not Found" << endl;
	}
	else
	{
		cout << "Target Found At :" << indexOfTarget << " index"<<endl;
	}
	
	return 0;
}
