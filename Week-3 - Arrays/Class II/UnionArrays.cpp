#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> arr {10, 30, 50, 70, 90};
	int sizeA = 5;
	vector<int> brr {20, 40, 60, 80, 100};
	int sizeB = 5;

	vector<int> ans;

	//push all elements of vector arr
	for(int i = 0; i < sizeA; i++)
	{
		ans.push_back(arr[i]);
	}
	//push all elements of vector brr
	for(int i = 0; i < sizeB; i++)
	{
		ans.push_back(brr[i]);
	}
	//Print ans vector
	cout << "Our ans vector is : ";
	//push all elements of vector arr
	for(int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	
	return 0;
}
