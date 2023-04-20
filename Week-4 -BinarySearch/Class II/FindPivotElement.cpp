#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int findPivotElement(vector<int> arr)
{
	int start = 0;
	int end = arr.size() - 1;

	int mid = start + (end - start) / 2;

	while(start <= end)
	{
		if(mid + 1 < arr.size() && arr[mid] > arr[mid + 1]) return mid;

		if(mid - 1 > 0 && arr[mid - 1] > arr[mid]) return mid - 1;

		if(arr[start] >= arr[mid]) end = mid - 1;

		if(arr[start] < arr[mid]) start = mid + 1;

		mid = start + (end - start) / 2;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	vector<int> arr {3, 4, 5, 6, 7, 8, 9, 1, 2};
	int ans = findPivotElement(arr);

	cout << "Pivot Element index is : " << ans << endl;
	cout << "Pivot Element is : " << arr[ans] << endl;

}
