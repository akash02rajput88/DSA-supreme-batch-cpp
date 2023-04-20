#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int arr[] = {1, 3, 7, 4, 6, 8, 9};
    int size = 7;

    int start = 0;
    int end = size - 1;
    while(start <= end)
    {
        if(start > end) {
            break;
        }
        if(start == end) {
            cout << arr[start] <<  " ";
        }
        else {
            cout << arr[start] << " ";
            cout << arr[end] <<  " ";
        }
        start++;
        end--;
    }
	
	return 0;
}
