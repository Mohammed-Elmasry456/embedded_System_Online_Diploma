# include <stdio.h>

int main()
{
	int i;
	char x[26];
	char* px = x;

	for(i=0;i<26;i++,px++)
	{
		*px = 'A'+i;

	}

	px = x;

	printf("The Alphabets are:\n");
	for(i=0;i<26;i++,px++)
	{
		printf("%c ",*px);

	}
	return 0;
}
