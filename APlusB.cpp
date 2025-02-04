#include <iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	if (1 <= a && 1 <= b && a <= 1000 && b <= 1000)
	{
		int sum = a + b;
		std::cout << sum;
	}
	else
	{
		std::cout << "Wrong number! Try again!" << std::endl;
		exit;
	}
	return 0;
}