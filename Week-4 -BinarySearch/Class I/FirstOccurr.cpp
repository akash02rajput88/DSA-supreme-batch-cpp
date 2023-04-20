#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int firstOccurrence(vector<int> arr, int target)
{
	int start = 0;
	int end = arr.size() -1;
	int mid = start + (end - start) / 2;

	int ans = -1;

	while(start <= end)
	{

		if  (target == arr[mid]) //element found, then return index
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

int main(int argc, char *argv[])
{
	vector<int> arr {1, 12,19, 19, 19, 19, 19, 19, 44, 44, 44, 44, 77, 89};

	int target  = 44;

	int ans = firstOccurrence(arr, target);
	cout << "First Occurrence is : " << ans << endl;

	//using inbuilt STL function
	auto ans2 = lower_bound(arr.begin(), arr.end(), target);
	cout << "First Occurrence by STL Function is : " << ans2 - arr.begin() << endl;
	
	return 0;
}

