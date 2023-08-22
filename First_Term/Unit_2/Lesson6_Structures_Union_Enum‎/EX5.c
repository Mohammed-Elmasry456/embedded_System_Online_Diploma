# include <stdio.h>
# include <string.h>

float pi = 3.1415;
float Area(int radius)
{
	return pi*radius*radius;
}



int main()
{
	int r;
	float area;
	printf("Enter the radius:");
	fflush(stdout);
	scanf("%d",&r);
	area = Area(r);
	printf("Area=%0.2f",area);













	return 0;
}
