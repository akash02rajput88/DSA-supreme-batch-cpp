#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> arr {30, 40, 50, 80, 10, 60};
	int sum = 90;

	for(int i = 0; i < arr.size(); i++)
	{
		int element1 = arr[i];
		for(int j = i+1; j < arr.size(); j++)
		{
			int element2 = arr[j];
			if(element1 + element2 == sum)
			{
				cout << "Pair is : " << "(" << element1 << "," << element2 << ")" << endl;
			}
		}
	}
	
	return 0;
}
