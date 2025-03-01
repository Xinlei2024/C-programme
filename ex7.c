#include <stdio.h>

int main(int argc,char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;
	
	//printf("you have %d bugs at imaginary rate of %f.\n",bugs, bug_rate);
	
	printf("you have %d bugs at imaginary rate of %d.\n",bugs, bug_rate);
	
	
	unsigned long universe_of_defects = 1024L * 200000024L * 200024L *1024L;
	printf("universe_of_defects has %ld bugs.\n",universe_of_defects);

	double expect_bugs = bugs * bug_rate;
	printf("you have %f bugs.\n",expect_bugs);
	
	double part_of_universe = expect_bugs / universe_of_defects;
	printf("A part of universe: %e.\n", part_of_universe);

	char nul_bytes = '\0';
	int care_percentage = bugs * nul_bytes;
	printf("nul_bytes is: %c.\n",nul_bytes);
	//printf("nul_bytes is: %s.\n",nul_bytes);
	printf("Which means you should care %d%%.\n", care_percentage);

	return 0;
}
