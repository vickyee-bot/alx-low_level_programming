#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	positive_or_negative(n);

	return (0);
}
