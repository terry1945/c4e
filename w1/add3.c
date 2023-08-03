/* sort of a stub
read in three floats and print the sum
from Ira Pohl's c 4 everyone course on coursera
3 Aug 2023
*/
#include<stdio.h>

int main(void)
{
	float a, b, c, sum;
	printf("Input three floats: ");
	scanf("%f%f%f", &a, &b, &c);
	printf("a = %f, b = %f and c = %f\n", a, b, c);
	sum = a + b + c;
	printf("sum = %f\n\n", sum);
	return 0;
}
