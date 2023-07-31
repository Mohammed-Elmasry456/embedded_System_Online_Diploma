

# include <stdio.h>

int main()
{


	int r,l;

	printf("Enter rows and column of matrix: ");
	fflush(stdout);
	scanf("%d %d",&r,&l);

	printf("\n");

	int a[r][l];
	int t[l][r];

	printf("Enter elements of matrix: \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<l;j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n");

	printf("Entered matrix: \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<l;j++)
		{
			printf("%d  ",a[i][j]);

		}
		printf("\r\n");
	}



	for(int i=0;i<l;i++)
	{
		for(int j=0;j<r;j++)
		{
			t[i][j]=a[j][i];

		}
	}


	printf("Transpose of matrix: \n");
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d  ",t[i][j]);

		}
		printf("\r\n");
	}



	return 0;
}
