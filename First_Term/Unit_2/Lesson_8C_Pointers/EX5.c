# include <stdio.h>
# include <string.h>

struct Employee
{
	char* Name;
	int* id;

};
int main()
{
	int i;
	static struct Employee s1 = {"ali",1001} ,s2 = {"Alex",1002},s3={"ahmed",1003} ;
	struct Employee (* ps[]) ={&s1,&s2,&s3};
	struct Employee(*(*pt)[3])=&ps;

	printf("Exmployee Name : %s\n",(*(*pt+1))->Name);
	printf("Exmployee ID : %d\n",(int)(*(*pt+1))->id);





	return 0;
}
