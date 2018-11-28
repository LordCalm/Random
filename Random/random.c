#include <stdio.h>
#include <time.h>
#include <math.h>
#pragma warning(disable : 4996)
long long r = 519545437;
long long Random(long long from, long long to)
{
	long long x = clock() + 1;
	long long z = ((long long)pow(x, 3) + r) % (to - from + 1) + from;
	r = z;
	return z;
}