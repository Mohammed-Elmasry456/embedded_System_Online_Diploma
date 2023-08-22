# include <stdio.h>
# include <string.h>

struct student{
	char name[10];
	int roll;
	float marks;
};



int main()
{
	struct student s[10];
	int i;
	printf("Enter information of students: \n");
	for(i=0;i<10;i++)
	{
		s[i].roll = i+1;

		printf("\nFor roll number %d\n",i+1);
		printf("Enter name: ");
		fflush(stdout);fflush(stdin);
		gets(s[i].name);

		printf("Enter marks: ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&s[i].marks);

	}


	printf("\nDisplaying Information\n\n");
	for(i=0;i<10;i++)
	{
		printf("Information for roll number %d:\n",s[i].roll);
		printf("name: %s\n",s[i].name);
		printf("Marks: %0.1f\n\n",s[i].marks);
	}














	return 0;
}
