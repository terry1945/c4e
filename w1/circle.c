/* 
calculate the area of a circle
from a given radius
*/
#include<stdio.h>

#define PI 3.14150

int main()
{
	double area = 0.0, radius = 0.0;
	printf("Enter radius: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("Radius of %lf units; area is %lf sq. units.\n", radius, area);

	return 0;
}
