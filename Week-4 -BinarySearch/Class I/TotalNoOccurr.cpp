#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int firstOccurrence(vector<int> arr, int target)
{
	int start = 0;
	int end = arr.size() -1;
	int mid = start + (end - start) / 2;

	int ans = -1; //Find Reason??????

	while(start <= end)
	{

		if  (target == arr[mid])
		{
			//ans store
			ans = mid;
			//left search
			end = mid - 1;
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

int lastOccurrence(vector<int> arr, int target)
{
	int start = 0;
	int end = arr.size() -1;
	int mid = start + (end - start) / 2;

	int ans2 = -1; //find reason????

	while(start <= end)
	{

		if  (target == arr[mid])
		{
			//ans store
			ans2 = mid;
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
	return ans2;
}

int main(int argc, char *argv[])
{
	vector<int> arr {1, 12,19, 19, 19, 19, 19, 19, 44, 44, 44, 44, 77, 89};

	int target  = 44;

	int ans = firstOccurrence(arr, target);
	cout << "First Occurrence is : " << ans << endl;

	int ans2 = lastOccurrence(arr, target);
	cout << "Last Occurrence is : " << ans2 << endl;

	int totalOccurrence = ans2 - ans + 1;
	cout << "Total Occurrences is : " << totalOccurrence << endl;
	
	return 0;
}

