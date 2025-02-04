#include <iostream>
#include <string>
#include <cstring>
int main()
{
	int n;
	std::cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		std::string bit;
		std::cin >> bit;
		if (bit.find("++") != std::string::npos)
		{
			x++;
		}
		else if (bit.find("--") != std::string::npos)
		{
			x--;
		}
	}
	std::cout << x;
	return 0;
}