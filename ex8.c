#include <stdio.h>

int main(int argc, char *argv[]){
	int areas[] = {10,12,13,14,20};
	char name[] = "Zed";
	areas[0] = 100;
	areas[1]='J';
	char full_name[] = {
	'Z','e','d',
	' ','A','.',' ',
	'S','h','a','w'};


	printf("The size of the int:%d\n",sizeof(int));
	printf("The size of areas(int[]): %ld\n",sizeof(areas));
	printf("The number of ints in areas: %ld\n",sizeof(areas)/sizeof(int));
	printf("The first area is %d, the second %d.\n",areas[0], areas[1]);

	printf("The size of a char: %ld\n",sizeof(char));
	printf("The size of name(char[]): %ld\n",sizeof(name));
	printf("The number of char: %d",sizeof(name)/sizeof(char));
	
        printf("The size of the full_name(char[]):%ld\n",sizeof(full_name));
        printf("The number of chars:%ld\n",sizeof(full_name)/sizeof(char));
        printf("name =\" %s \" and full name= \" %s \" \n:",name,full_name);
	
	full_name[0] = 'K';
	name[0] = 'K';
	printf("name =\" %s \" and full name= \" %s \" \n:",name,full_name);
	return 0;
}
