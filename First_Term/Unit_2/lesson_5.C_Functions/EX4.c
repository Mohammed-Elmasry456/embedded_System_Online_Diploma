

# include <stdio.h>
# include <string.h>


int fun(int x,int y)
{
	if(y==1)
	{
		return x;
	}


	return x*fun(x,y-1);
}



int main()
{

	int x,y,z;

	printf("Enter base number:");
	fflush(stdout);
	scanf("%d",&x);

	printf("Enter power number(positive integer):");
	fflush(stdout);
	scanf("%d",&y);

	z=fun(x,y);

	printf("%d^%d = %d",x,y,z);










	return 0;
}



