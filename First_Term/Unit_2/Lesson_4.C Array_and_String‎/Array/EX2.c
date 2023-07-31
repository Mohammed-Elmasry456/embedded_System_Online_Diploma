

# include <stdio.h>

int main()
{


	int n;
	float sum = 0.0;


	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%d",&n);

	float  x[n];


	for(int i=0;i<n;i++)
	{
		printf("Enter number: ");
		fflush(stdout);
		scanf("%f",&x[i]);
		sum += x[i];
	}

	printf("Average = %0.2f",sum/n);

	return 0;
}
