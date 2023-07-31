

# include <stdio.h>

int main()
{

	char c[100];
	int r=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(c);


	for(int i=0;c[i]!=0;i++)
	{

			r++;

	}

	printf("\nLength of string: %d",r);









	return 0;
}
