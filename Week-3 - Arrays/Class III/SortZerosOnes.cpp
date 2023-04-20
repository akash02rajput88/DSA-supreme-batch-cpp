#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> arr {0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0};

	int start = 0;
	int end = arr.size() - 1;
	int i = 0;

	while(i != end)
	{
		if(arr[i] == 0)
		{
			//swap from left
			swap(arr[start], arr[i]);
			i++;
			start++;
		}
		if(arr[i] == 1) //else bhi likh sakte h no  problem
		{
			//swap from right
			swap(arr[i], arr[end]);
			end--;
		}
	}

	//print bia foreach loop
	for(auto values : arr) 
	{
		cout << values <<  " ";
	}
	
	return 0;
}
