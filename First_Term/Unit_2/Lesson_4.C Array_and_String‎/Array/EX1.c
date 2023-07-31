

# include <stdio.h>

int main()
{

	float  x[2][2];
	float  y[2][2];
	float  z[2][2];

	printf("Enter the elements of 1st matrix \n");
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			printf("Enter a%d%d: ",i,j);
			fflush(stdout);
			scanf("%f",&x[i-1][j-1]);
		}

	}

	printf("Enter the elements of 2nd matrix \n");
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			printf("Enter a%d%d: ",i,j);
			fflush(stdout);
			scanf("%f",&y[i-1][j-1]);
		}

	}


	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			z[i][j]= x[i][j]+y[i][j];
		}
		printf("\n");

	}

	printf("Sum Of Matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%0.1f \t",z[i][j]);
		}
		printf("\n");

	}


	return 0;
}
