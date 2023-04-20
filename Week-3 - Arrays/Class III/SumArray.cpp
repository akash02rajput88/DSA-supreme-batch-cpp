#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 8, 7, 9, 10};
		int size = 10;

		int sum = 0;

		for(int i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		cout << sum;
	return 0;
}
