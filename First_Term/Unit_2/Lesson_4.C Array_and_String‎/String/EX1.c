

# include <stdio.h>

int main()
{

	char c[100],s;
	int r=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(c);

	printf("\nEnter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&s);

	for(int i=0;i<100 && c[i]!=0;i++)
	{
		if(c[i]==s)
		{
			r++;
		}
	}

	printf("\nFrequency of e = %d",r);









	return 0;
}
