#include <stdio.h>

int main(int argc,char *argv[]){

	int distance =100;
	char initial ='A';
	float num = 2.345f;
	char first_name[] = "ZED";
	char last_name[]="Shaw";
	double super_power = 5678.321;

	printf("%d\n",distance);
	printf("%f\n",super_power);
	printf("%f\n",num);
	printf("%c\n",initial);
	printf("%s\n",first_name);
	printf("whole name %s,%c,%s",first_name,initial,last_name);
	return 0;
}
