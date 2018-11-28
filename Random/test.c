#include <stdio.h>
#include "Random.h"
#pragma warning(disable : 4996)

int main()
{
	for (int i = 0; i < 1000; i++)
	{
		printf("%i\n", Random(0, 100));
	}
	return 0;
}
