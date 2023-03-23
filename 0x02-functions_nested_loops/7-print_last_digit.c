#include "main.h"
/**
*print_last_digit -function that prints last digit
*
*0i :function parameter
*
*Return :k
*/
int print_last_digit(int)
{
	int k;
	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}
