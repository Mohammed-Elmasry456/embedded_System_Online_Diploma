

# include <stdio.h>
# include <string.h>

int main()
{

	char x[100],y[100];
	int r=0,i;
	printf("Enter a string : ");
	fflush(stdout);
	gets(x);

	r = strlen(x)-1;


	for(i=0;x[i]!=0;i++)
	{

			y[i]=x[r-i];

	}
	y[i]=0;

	printf("Reverse string is : %s",y);









	return 0;
}
