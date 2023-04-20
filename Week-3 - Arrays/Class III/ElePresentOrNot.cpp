#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int arr[7] = {2, 46, 7, 9, 12, 56, 66};
	int size = 7;

	int target = 10;

	bool ans = find(arr, size, target);

	for(int i = 0 ; i < size; i++){
		if(ans == true) {
			cout << "Found" << endl;
		}
		else {
			cout << "Not Found" << endl;
		}
	}

	return 0;
}

bool find(int arr[], int size, int target)
{
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == target) return true;
	}
	return false;
}
