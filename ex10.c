#include <stdio.h>

int main(int argc, char *argv[]){
	int i = 1;
	char *state[]={
        NULL,"book","keep","study"}; 
		
	argv[0] = state[1];

	for (i=0;i< argc;i++){
	printf("arg %d: %s\n",i,argv[i]);
	}

	//char *state[]={
	//NULL,"book","keep","study"};

	int num_states = 5;
	state[0] = argv[1];	
	//printf("arg = %s\n:",argv[0]);
	for(i = 0; i<num_states;i++){
	printf("the %d word is %s\n",i,state[i]);
	}
	
	return 0;
}
