#include <iostream>
#include <cmath>
int main()
{
	int n, k;
	std::cin >> n >> k;
	if (1 <= n && n <= pow(10, 5) && 2 <= k && k <= pow(10, 5))
	{
		int x = n;
		int day = 0;
		int t = 0;
		while (x > 0)
		{
			x--;
			day++;
			t++;
			if (t == k)
			{
				x += 1;
				t -= k;
			}
		}
		std::cout << day;
	}
	else
	{
		exit;
	}
	return 0;
}