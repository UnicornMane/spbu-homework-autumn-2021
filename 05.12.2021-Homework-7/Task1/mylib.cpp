#include <iostream>
#include"mylib.h"

int task2(int n)
{
	int cnt = 0;
	while (n != 1)
	{
		if (n % 2)
		{
			n = 3 * n + 1;
		}
		else
		{
			n /= 2;
		}
		cnt++;
	}
	return cnt;
}

void task3(int r)
{
	for (int i = 0; i <= 2 * r; ++i)
	{
		for (int j = 0; j <= 2 * r; ++j)
		{
			if (r * r >= (i - r) * (i - r) + (j - r) * (j - r))
			{
				std::cout << '*';
			}
			else
			{
				std::cout << ' ';
			}
		}
		std::cout << std::endl;
	}
	return;
}