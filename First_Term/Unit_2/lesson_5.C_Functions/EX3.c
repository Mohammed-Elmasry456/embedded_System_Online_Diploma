

# include <stdio.h>
# include <string.h>

void fun()
{
	char x;
	scanf("%c",&x);
	if(x != '\n')
	{
	   fun();
	   printf("%c",x);

	}

}




int main()
{

	printf("Enter a sentence : ");
	fflush(stdout);
	fun();




	return 0;
}
