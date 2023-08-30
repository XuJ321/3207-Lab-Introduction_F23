
#include <time.h>
#include "header.h"




int main()
{
	int a,temp;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );
	

	printf("Today's random word: ");
	for(a=0;a<7;a++){
		temp = rand()%27;
		putchar( randchar(temp) );
	}
	putchar('\n');

	return(0);
}

