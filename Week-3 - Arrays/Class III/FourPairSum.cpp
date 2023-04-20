#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	//printf("Hello, world\n");
	vector<int> arr {10, 20, 30, 40, 50, 60, 70};
	int sum = 150;

	for(int i = 0; i < arr.size(); i++) 
		{
		int element1 = arr[i];
		for(int j = i+1; j < arr.size(); j++) 
			{
			int element2 = arr[j];
			for(int k = j+1; k < arr.size(); k++) 
				{
				int element3 = arr[k];
				for(int m = k+1; m < arr.size(); m++) 
					{
					int element4 = arr[m];
					if(element1 + element2 + element3 + element4 == sum)
						{
							cout << "Our FourPairs is : " << "(" << element1 << "," << element2 << "," << element3 << "," << element4 << ")" << endl;
						}
					}
				}
			}
		}

	return 0;
}
