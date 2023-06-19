0-positive_or_neative.c


#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**

 * main - Determines if a number is positive, nagative or zero.

 * Rerurn: Always 0 (Succeess)

 */

int main(void)

{
	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if(n>0)

{

	printf("%d is positive\n", n);


}

else

{

	printf("%d id negative\n", n);

}

return (0);

}
