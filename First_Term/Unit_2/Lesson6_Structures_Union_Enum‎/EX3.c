# include <stdio.h>
# include <string.h>

struct Complex{
	float real;
	float imag;
};

struct Complex add(struct Complex x,struct Complex y)
{
	struct Complex z;
	z.real = x.real + y.real;
	z.imag = x.imag + y.imag;
	return z;
}



int main()
{
	struct Complex x,y,z;

	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&x.real,&x.imag);

	printf("For 2st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&y.real,&y.imag);

	z = add(x,y);


	printf("Sum=%0.1f+%0.1fi",z.real,z.imag);









	return 0;
}
