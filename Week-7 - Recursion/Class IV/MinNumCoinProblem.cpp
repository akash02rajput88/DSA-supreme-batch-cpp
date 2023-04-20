#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minNumOfCoins(vector<int>& arr, int target)
{
	//base case
	if(target == 0)
		return 0;

	if(target < 0) // hum mini ko update nahi karna chahte hain
		return INT_MAX;

	//let's solve one case ans left other case on recursion
	int mini = INT_MAX;
	for(int i=0; i<arr.size(); i++)
	{
		int ans = minNumOfCoins(arr, target - arr[i]);
		if(ans != INT_MAX)
			mini = min(mini, ans + 1);
	}
	return mini;
}

int main(int argc, char *argv[])
{
	vector<int> arr{1, 2, 5};
	int target = 5;

	int coins = minNumOfCoins(arr, target);
	cout << "Minimum Numbers of Coins is : " << coins << endl;
	
	return 0;
}
