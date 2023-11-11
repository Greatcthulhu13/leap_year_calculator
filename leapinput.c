#include <stdio.h>
/* D.1 Level 1 number 2 (leapinput.c) - combining logic (orig. S Kochan) */
int main()
{
	int inputYear, div_4, div_100, div_400;
	printf("Enter a year: ");
	scanf("%d" , &inputYear);
	if ( inputYear <= 0)
		return 0;
	else 
		div_4 = inputYear % 4;
		div_100 = inputYear % 100;
		div_400 = inputYear % 400;
		if ((div_4 == 0 && div_100 !=0) || div_400 == 0) 
			printf("Is a leap year \n");
		else
			printf("Not a leap year \n");
		return 0;
}
