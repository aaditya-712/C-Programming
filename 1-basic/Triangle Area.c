#include<stdio.h>
int main()
{
	float base, height, area;
	printf("Enter the base of triangle: ");
	scanf("%f", &base);
	printf("Enter the height of triangle: ");
	scanf("%f", &height);
	area=0.5*base*height;
	printf("Area of Triangle: %f\n ", area);
	return 0;
}