
/* 
Convert a fahrenheit temp to celcius
homage to K&R
3 Aug 2023
*/
#include<stdio.h>

int main()
{
	int fahrenheit, celsius;

	printf("Please enter a fahrenheit temp as an integer: ");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32) / 1.8; // note conversion 1.8 isn't int
	printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);

	return 0;
}
