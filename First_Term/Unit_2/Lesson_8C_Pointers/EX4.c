# include <stdio.h>
# include <string.h>
int main()
{
	int i,n;
	int x[15];

	printf("Input the number of elements to store in array (max 15) : ");
	fflush(stdout);
	scanf("%d",&n);

	int* px = x;
	printf("Input %d number of elements in the array : \n",n);
	for(i=0;i<n;i++,px++)
	{
		printf("element - %d :",i+1);
		fflush(stdout);
		scanf("%d",px);

	}





	px = &x[n-1];
	printf("\nThe elements of array in reverse order are :\n");
	for(i=0;i<n;i++,px--)
	{
		printf("element - %d : %d\n",i+1,*px);

	}


	return 0;
}
