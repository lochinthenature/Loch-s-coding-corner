#include <iostream>
int main()
{
	int t;
	std::cin >> t;
	while (t--)
	{
		int m, n;
		std::cin >> n >> m;
		if (1 <= n && 1 <= m && n <= 100 && m <= 100)
		{
			if (n < m)
			{
				std::cout << "NO" << std::endl;
			}
			else if (m == n)
			{
				std::cout << "YES" << std::endl;
			}
			else
			{
				if ((n - m) % 2 == 0)
				{
					std::cout << "YES" << std::endl;
				}
				else
				{
					std::cout << "NO" << std::endl;
				}
			}
		}
		else
		{
			exit(0);
		}
	}
	return 0;
}