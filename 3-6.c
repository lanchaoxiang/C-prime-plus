#include <stdio.h>

int main(int argc, char *argv[]) {
	float mol=3.0e-23;
	float q=950;
	float quarts;
	printf("input water\n");
	scanf("%f",&quarts);
	printf("%e",quarts*q*mol);
}