#include <stdio.h>

int main(void) {
	float num;
	printf("input a float num:\n");
	scanf("%f",&num);
	printf("fixed-point:%f\n",num);
	printf("exponential:%e\n",num);
	printf("p:%a",num);
	
}