#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> arr {-1, 3, 5, 7, 9};
	vector<int> brr {2, 4, 5, 7, -1};

	vector<int> ans;

	//outer loop for arr vector
	for(int i = 0; i < arr.size(); i++)
	{
		int element = arr[i];
		//for every element, run loop on brr 
		for(int j = 0; j < brr.size(); j++)
		{
			if(element == brr[j])
			{
				//mark- find duplicate value this condition want to say we are already see this
				brr[j] = -1; //Agar array main koi value -ve hai to -1 ki jagah INT_MIN use kar lo
				ans.push_back(element);
			}
		}
	}

	//print ans array
	for(auto values : ans)
	{
		cout << values << " ";
	}
	
	return 0;
}
