#include <stdio.h>

int main(int argc, char *argv[]){

	//if(argc != 2){
	//printf("You need 1 argument.\n");

	//return 1;
	//}

	//int i = 0;
	char letter = '\0';
	for (int arg = 1; arg < argc; arg++){
	for(int i = 0,letter = '\0'; argv[arg][i] != '\0',letter = argv[arg][i]; i++){
	//char letter = argv[1][i];
	
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
