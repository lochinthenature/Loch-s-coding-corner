#include <iostream>
#include <cmath>
int main()
{
	int n;
	std::cin >> n;
	if (1 <= n && n <= 1000)
	{
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			std::cin >> arr[i];
			if (arr[i] <= 1000)
			{
				continue;
			}
			else
			{
				exit;
			}
		}
		int extremalMAX = 0;
		int extremalMIN = 0;
		for (int j = 0; j < n; j++)
		{
			extremalMAX = std::max(extremalMAX, arr[j]);
		}
		for (int k = 0; k < n; k++)
		{
			extremalMIN = std::min(extremalMIN, arr[k]);
		}
		std::cout << extremalMAX << " " << extremalMIN;
		delete[] arr;
		return 0;
	}
}