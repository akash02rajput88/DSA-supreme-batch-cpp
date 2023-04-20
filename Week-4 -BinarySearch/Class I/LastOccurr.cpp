#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int lastOccurrence(vector<int> arr, int target)
{
	int start = 0;
	int end = arr.size() -1;
	int mid = start + (end - start) / 2;

	int ans = -1; //find reason????

	while(start <= end)
	{

		if  (target == arr[mid]) //element found, then return index
		{
			//ans store
			ans = mid;
			//left search
			start = mid + 1;
		}
		if (target < arr[mid]) 
		{
			//search in left
			end = mid - 1;
		}
		if (target > arr[mid])
		{
			//search in right
			start = mid + 1;
		}
		mid = start + (end - start) / 2;

	}
	//if element not found
	return ans;
}

int main(int argc, char *argv[])
{
	vector<int> arr {7, 10,14, 14, 14, 14, 19, 19, 19, 55, 55, 55, 55, 55, 99};

	int target  = 55;

	int ans = lastOccurrence(arr, target);

	cout << "Last Occurrence is : " << ans << endl;
	
	return 0;
}

