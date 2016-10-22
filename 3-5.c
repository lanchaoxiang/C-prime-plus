#include <stdio.h>

int main(int argc, char *argv[]) {
	long sec;
	int age;
	sec=3.156e7;
	printf("input your age:\n");
	scanf("%d",&age);
	printf("you had live %ldsec",age*sec);
	return 0;
	
}