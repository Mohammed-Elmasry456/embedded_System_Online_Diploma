# include <stdio.h>
# include <string.h>

struct student{
	char name[10];
	int roll;
	float marks;
};

void print(struct student s)
{
	printf("\nDisplaying Information\n");
	printf("name: %s\n",s.name);
	printf("Roll: %d\n",s.roll);
	printf("Marks: %0.2f\n",s.marks);


}



int main()
{
	struct student s;
	printf("Enter information of students: \n\n");
	printf("Enter name: ");
	fflush(stdout);
	gets(s.name);

	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d",&s.roll);

	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f",&s.marks);

	print(s);








	return 0;
}
