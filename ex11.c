#include <stdio.h>

int main(int argc, char* argv[]){

	//argv
	int i = 0;
	while(i<argc) //初始化
	{
		printf("arg %d:%s\n",argc - i - 1,argv[argc - i - 1]);
		i++;
	}

	char *states[] = {
		"California","B-state","C-state","D-state"
	};

	int num_states = 4;
	i = num_states - 1;
	while(i >= 0)
	{	if(i == 1){
		break;
			  }else{
		printf("state %d:%s.\n",i,states[i]);
		states[i] = argv[i];
		printf("state %d:%s.\n",i,states[i]);
		i--;}
	}

	return 0;



}
