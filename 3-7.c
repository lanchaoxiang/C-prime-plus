# include <stdio.h>
int main(void)
{
	float x;
  
	printf("请输入一个身高数__cm\n");
	scanf("%f",&x);
	
printf("身高%fcm=%0.2fin\n",x, 2.54*x);
return 0;
}
