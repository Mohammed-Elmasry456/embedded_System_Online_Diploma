# include <stdio.h>
# include <string.h>
int main()
{
	int i;
	char x[30];
	printf("pointer:print a string in reverse order:\n");
	printf("------------------------------\n");
	printf("Input a string : ");
	fflush(stdout);
	gets(x);


	char* px = x;
	px += strlen(x)-1;

	printf("Reverse of the string is : ");
	for(i=0;i<strlen(x);i++,px--)
	{
		printf("%c",*px);

	}


	return 0;
}
