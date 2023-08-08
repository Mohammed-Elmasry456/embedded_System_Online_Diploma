

# include <stdio.h>
# include <string.h>


int fun(int x)
{
	if(x==0 || x==1)
	{
		return 1;
	}
	return x*fun(x-1);
}



int main()
{

	int x;

	printf("Enter an positive integer: ");
	fflush(stdout);
	scanf("%d",&x);




	printf("Factorial of %d = %d",x,fun(x));





	return 0;
}
