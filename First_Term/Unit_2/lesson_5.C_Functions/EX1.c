

# include <stdio.h>
# include <string.h>


int fun(int x)
{
	int i,tt=1;


	for(i=2;i<=x/2;i++)
	{
		if(x % i == 0)
		{
			tt = 0;
			break;
		}

	}

	return tt;

}



int main()
{

	int x,y,t,r=0,i,j;
	int k[10];

	printf("Enter two numbers(intervals):");
	fflush(stdout);
	scanf("%d %d",&x,&y);

	for(i=x;i<=y;i++)
	{
		t=fun(i);
		if(t)
		{
			k[r]=i;
			r++;
		}

	}


	printf("Prime numbers between %d and %d are: ",x,y);
	for(j=0;j<r;j++)
	{
		printf("%d ",k[j]);
	}




	return 0;
}
