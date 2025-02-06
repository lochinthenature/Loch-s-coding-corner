#include <iostream>
int main()
{
	int n, p1, p2, p3, t1, t2;
	std::cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
	int l[100];
	int r[100];
	int total = 0;
	int work = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> l[i] >> r[i];
		work += r[i] - l[i];
	}
	for(int i = 1; i < n; i++)
	{
		int rest = l[i] - r[i - 1];
		if (rest > t1 && rest <= t1 + t2)
		{
			total += ((rest - t1) * p2 + t1 * p1);
		}
		else if (rest > t1 + t2)
		{
			total += (t2 * p2 + p1 * t1 + (rest - t1 - t2) * p3);
		}
		else if(rest >= 0 && rest <= t1)
		{
			total += rest * p1;
		}
	}
	total += work * p1;
	std::cout << total << std::endl;
	return 0;
}