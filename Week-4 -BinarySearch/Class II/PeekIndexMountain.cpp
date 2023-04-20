#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int peekIndexMountain(vector<int> arr)
{
	int start = 0;
	int end = arr.size() - 1;

	int mid = start + (end - start) / 2;

	while(start < end)
	{
		if (arr[mid] < arr[mid + 1])
		{
			start = mid + 1;
		}
		else {
			end = mid;
		}
		mid = start + (end - mid) / 2;
	}
	return start;
}

int main(int argc, char *argv[])
{
	vector<int> arr {3, 4, 5, 1};
	int ans = peekIndexMountain(arr);

	cout << "Peek index Mountain is : " << ans << endl;

}
