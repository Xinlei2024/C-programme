#include <stdio.h>

int main(int argc, char *argv[]){

	//if(argc != 2){
	//printf("You need 1 argument.\n");

	//return 1;
	//}

	//int i = 0;
	char letter = '\0';
	char **cur_argv = argv + 1;
	//int count = 0;
	//count = sizeof(argv)/sizeof(char);
	for (; *cur_argv != NULL; cur_argv++){
	//count  = sizeof(argv[arg])/sizeof(char);
	//**cur_argv = argv[arg];
		for(char *cur_char = *cur_argv; *cur_char != '\0'; cur_char++){
		letter = *cur_char;
	
	switch(letter){
		case 'A':
			printf("a");
			break;
                case 'B':
                        printf("b");
                        break;
		case 'C':
                        printf("c");
                        break;
		default:
			printf("%c",letter);
	}
	}
	printf("\n");
	}
	return 0;
}
