#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int arr[] = {1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0,1};
	int size = 17;

	int zeros = 0;
	int ones = 0;

	for(int i = 0; i < size; i++) {
		if(arr[i] == 0) zeros++;
		if(arr[i] == 1) ones++;
	}

	cout << "Number of Zero's : " << zeros << endl;
	cout << "Number of One's : " << ones << endl;
	
	return 0;
}
