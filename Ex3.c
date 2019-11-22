#include <stdio.h>
int main()
{
	unsigned long int min = 0;
	unsigned long int max = ~min;
	int bit_width = sizeof(max) * 8;
	printf("unsigned long int is sizeof %d bit. The max is %lu, the min is %lu\n", bit_width, max, min);
	return 0;
}
