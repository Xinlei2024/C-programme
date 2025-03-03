#include <stdio.h>


int main(int argc,char *argv[]){
	int i = 1;

	if(argc == 1){
	printf("One argument.\n");
	}else if( argc > 1 && argc < 4){
		printf("Here is your arguments:\n");

		for (i=1;i < argc; i++){
		printf("argument %d:%s:\n",i,argv[i]);
		}
		printf("\n");
	}
	else{
	printf("too many arguments.\n");
	}
	return 0;
}
