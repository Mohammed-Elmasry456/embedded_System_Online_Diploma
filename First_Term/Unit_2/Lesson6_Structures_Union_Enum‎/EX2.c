# include <stdio.h>
# include <string.h>

struct Distance{
	int feet;
	float inch;
};

struct Distance add(struct Distance x,struct Distance y)
{
	struct Distance z;
	z.feet = x.feet + y.feet;
	z.inch = x.inch + y.inch;
	return z;
}



int main()
{
	struct Distance x,y,z;
	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&x.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&x.inch);

	printf("\nEnter information for 2st distance\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&y.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&y.inch);

	z = add(x,y);

	if(z.inch > 12.0)
	{
		z.inch = z.inch - 12.0;
		z.feet++;
	}

	printf("Sum of distances=%d'-%0.1f\"",z.feet,z.inch);









	return 0;
}
