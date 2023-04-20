#include <iostream>
#include <limits.h>
using namespace std;

int rodCutting(int n, int x, int y, int z)
{
	//base case
	if(n == 0)
		return 0;

	if(n < 0)
		return INT_MIN;

	//let's solve one case ans left other case on recursion
	int ans1 = rodCutting(n - x, x, y, z) + 1;
	int ans2 = rodCutting(n - y, x, y, z) + 1;
	int ans3 = rodCutting(n -z, x, y, z) + 1;

	int ans = min(ans1 , min(ans2, ans3));
	return ans;
}

int main(int argc, char *argv[])
{
	int n = 7;
	int x = 5;
	int y = 2;
	int z = 2;

	//rodCutting() Function -->> return the minimum num of segments
	int ans = rodCutting(n, x, y, z);
	if(ans < 0) 
	{
		ans = 0;
	}
	cout << "Minimum Numbers of Segments in Rod is : " << ans << endl;
	
	return 0;
}
