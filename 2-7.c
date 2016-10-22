#include <stdio.h>
int smile (void);
int main (void){
	for (int i=3; i>0; i--) {
		for (int j=i;j>0;j--)
			smile ();
	printf ("\n") ;}
getchar ();
return 0;}
int smile (void)
{    printf ("Smile!");}