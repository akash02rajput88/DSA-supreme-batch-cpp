#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int solve(int dividend, int divisor)
{
	int s = 0;
	int e = abs(dividend);
	int mid = s + (e - s) / 2;
	
	int ans = -1;
	while(s <= e)
	{
		//perfect solution
		if( mid * abs(divisor) == abs(dividend))
		{
			//store ans and then break
			ans = mid;
			break;
		}
		//Not perfect solution
		if(mid * abs(divisor) > abs(dividend))
		{
			//Left search
			e = mid - 1;
		}
		else
		{
			//ans store
			ans = mid;
			//Right Search
			s = mid + 1;
		}
		
		mid = s + (e - s) / 2;
	}

	if((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
	{
		return ans;
	}
	else
	{
		return -ans;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	int dividend = -22;
	int divisor = 7;

	int ans = solve(dividend, divisor);

	cout << "Quotient is : " << ans << endl;
	
	
	return 0;
}
