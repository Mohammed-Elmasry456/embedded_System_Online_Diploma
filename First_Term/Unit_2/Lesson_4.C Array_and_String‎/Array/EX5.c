

# include <stdio.h>

int main()
{


	int n,s,l;
	int x[30];
	int check = 0;

	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d",&n);


	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}

	printf("\nEnter the element to be searched : ");
	fflush(stdout);
	scanf("%d",&s);



	for(int i=0;i<n;i++)
	{
		if(x[i]==s)
		{
			l= i;
			check = 1;
			break;
		}
	}

	if(check)
	{
		printf("\nNumber found at the location = %d",l+1);
	}
	else
	{
		printf("\nNumber not found");
	}





	return 0;
}
