#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int binarySearchMatrix(int arr[5][4], int rows, int cols, int target)
{
	int s = 0;
	int totalSize = rows * cols - 1;
	int e = totalSize - 1;

	int mid = s + (e -s) / 2;
	while(s <= e)
	{
		int rowIndex = mid / cols;
		int colIndex = mid % cols;
		int element = arr[rowIndex][colIndex];

		if (element == target)
		{
			cout << "Found At : " << rowIndex << "  " << colIndex << endl;
			return true;
		}
		if (element > target)
		{
			//Left Search
			e = mid - 1;
		}
		else
		{
			//Right search
			s = mid + 1;
		}
		mid = s + (e -s) / 2;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
	int rows = 5;
	int cols = 4;
	int target = 18;

	int ans = binarySearchMatrix(arr, rows, cols, target);

	if(ans)
	{
		cout << "Found" << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
	return 0;
}
