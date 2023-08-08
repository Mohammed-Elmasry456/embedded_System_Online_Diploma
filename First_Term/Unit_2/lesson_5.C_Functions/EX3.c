

# include <stdio.h>
# include <string.h>

void Reverse(char x[])
{
	int s = strlen(x),i,t;
	for(i=0;i<s/2;i++)
	{
		t = x[i];
		x[i]=x[s-1-i];
		x[s-1-i] = t;



	}
	printf("%s",x);
}




int main()
{

	char x[30];
	printf("Enter a sentence : ");
	fflush(stdout);
	gets(x);

	Reverse(x);




	return 0;
}
