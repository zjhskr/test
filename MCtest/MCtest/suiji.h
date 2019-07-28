#ifndef DRAND48_H
#define DRAND48_H

#include <cstdlib>

const long long m = 0x100000000LL;
const int k = 0xB16;
const long long j = 0x5DEECE66DLL;

static unsigned long long seed = 1;

double drand48(void)
{
	seed = (j * seed + k) & 0xFFFFFFFFFFFFLL;
	unsigned int x = seed >> 16;
	return 	((double)x / (double)m);

}

void srand48(unsigned int i)
{
	seed = (((long long int)i) << 16) | rand();
}

#endif
