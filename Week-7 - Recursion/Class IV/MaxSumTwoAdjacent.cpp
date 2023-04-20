#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int maxSumAdjacent(vector<int>& arr, int sum, int i, int& maxi)
{
	//base case
	if(i >= arr.size())
	{
		maxi = max(sum, maxi);
		return maxi;
	}

	//include
	maxSumAdjacent(arr, sum + arr[i], i + 2, maxi);

	//exclude
	maxSumAdjacent(arr, sum, i + 1, maxi);
	
}

int main(int argc, char *argv[])
{
	vector<int> arr{2, 1, 4, 9};
	int sum = 0;
	int maxi = INT_MIN;
	int i = 0;

	maxSumAdjacent(arr, sum, i, maxi);

	cout << "Maximum sum of Subsequence in which two element are adjacent :  " << maxi << endl;
	
	return 0;
}
