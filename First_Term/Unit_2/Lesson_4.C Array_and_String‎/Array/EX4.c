

# include <stdio.h>

int main()
{


	int n,i,l;
	int x[30];

	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d",&n);


	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdout);
	scanf("%d",&i);

	printf("\nEnter the location : ");
	fflush(stdout);
	scanf("%d",&l);

	for(int i=n;i>=l;i--)
	{
		x[i]=x[i-1];
	}
	n++;

	x[l-1]=i;

	for(int i=0;i<n;i++)
	{
		printf("%d  ",x[i]);
	}



	return 0;
}
