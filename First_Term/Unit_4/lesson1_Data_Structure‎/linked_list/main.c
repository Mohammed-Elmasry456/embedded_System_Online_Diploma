#include "string.h"
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#define DPRINTF(...) {fflush(stdout);fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);fflush(stdin);\
}

struct Sdata
{
	int id;
	char name[40];
	float height;
};

struct SStudent
{
	struct Sdata Student;
	struct SStudent* PNextstudent;

};

struct SStudent* PFirststudent = NULL;

void addStudent()
{
	struct SStudent* PNewstudent;
	struct SStudent* PLaststudent;
	char temp_text[40];
	if(PFirststudent == NULL)
	{
		PNewstudent =(struct SStudent*) malloc(sizeof(struct SStudent));
		PFirststudent = PNewstudent;
	}
	else
	{
		PLaststudent = PFirststudent;
		while(PLaststudent->PNextstudent)
			PLaststudent = PLaststudent->PNextstudent;
		PNewstudent =(struct SStudent*) malloc(sizeof(struct SStudent));
		PLaststudent->PNextstudent = PNewstudent;

	}

	//----------record_Data---------------------------
	DPRINTF("\nEnter The ID : ");
	gets(temp_text);
	PNewstudent->Student.id = atoi(temp_text);


	DPRINTF("Enter Student Name : ");
	gets(PNewstudent->Student.name);


	DPRINTF("Enter Height : ");
	gets(temp_text);
	PNewstudent->Student.height = atof(temp_text);


	PNewstudent->PNextstudent = NULL;

}






int deleteStudent()
{
	char temp_data[40];
	int temp_id;
	DPRINTF("\nEnter the student ID : ");
	gets(temp_data);
	temp_id = atoi(temp_data);
	if(PFirststudent)
	{
		struct SStudent* PPreviousstudent = NULL;
		struct SStudent* PSelectedstudent = PFirststudent;
		while(PSelectedstudent)
		{
			if(PSelectedstudent->Student.id == temp_id)
			{
				if(PPreviousstudent)
				{
					PPreviousstudent->PNextstudent = PSelectedstudent->PNextstudent;
				}
				else
				{
					PFirststudent = PSelectedstudent->PNextstudent;
				}
				free(PSelectedstudent);
				return 1;
			}
			PPreviousstudent = PSelectedstudent;
			PSelectedstudent = PSelectedstudent->PNextstudent;
		}

	}
	printf("\n Student ID not found");



	return 0;
}

void View_Students()
{
	struct SStudent* PCurrentstudent = PFirststudent;
	int count = 0;
	if(PFirststudent == NULL)
	{
		DPRINTF("\nEmpty list");
	}

	else
	{

		while(PCurrentstudent)
		{
			DPRINTF("\nRecord Number %d ",count+1);
			DPRINTF("\n ID : %d",PCurrentstudent->Student.id);
			DPRINTF("\n Name : %s",PCurrentstudent->Student.name);
			DPRINTF("\n Height : %f",PCurrentstudent->Student.height);
			PCurrentstudent = PCurrentstudent->PNextstudent;
			count++;
		}
	}
}

//---------------------------------------------------------------------------------------------

void GetStudent()
{
	int i;
	DPRINTF("\nEnter The Index of Student :");
	scanf("%d",&i);
	struct SStudent* PCurrentstudent = PFirststudent;
	int count = 0;
	if(PFirststudent == NULL)
	{
		DPRINTF("\nEmpty list");
	}

	else
	{

		while(PCurrentstudent)
		{
			if(count == i)
			{
				DPRINTF("\nRecord Number %d ",count+1);
				DPRINTF("\n ID : %d",PCurrentstudent->Student.id);
				DPRINTF("\n Name : %s",PCurrentstudent->Student.name);
				DPRINTF("\n Height : %f",PCurrentstudent->Student.height);
				break;


			}
			PCurrentstudent = PCurrentstudent->PNextstudent;
			count++;

		}
	}
}
//---------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------

int GetLength(struct SStudent* Pstudent)
{


	struct SStudent* PCurrentstudent = Pstudent;

	if(PCurrentstudent == NULL)
	{
		return 0;
	}
	else
	{

		return 1+GetLength(PCurrentstudent->PNextstudent);
	}
}
//---------------------------------------------------------------------------------------------

void Get_Student_From_End()
{
	int i;
	DPRINTF("\nEnter The Index of Student :");
	scanf("%d",&i);
	struct SStudent* P_1 = PFirststudent;
	struct SStudent* P_2 = PFirststudent;
	int count ;
	if(PFirststudent == NULL)
	{
		DPRINTF("\nEmpty list");
	}

	else
	{
		for(count=0 ; count<i;count++)
			P_2 = P_2->PNextstudent;

		while(P_2)
		{
			P_1 = P_1->PNextstudent;
			P_2 = P_2->PNextstudent;

		}

		DPRINTF("\n ID : %d",P_1->Student.id);
		DPRINTF("\n Name : %s",P_1->Student.name);
		DPRINTF("\n Height : %f",P_1->Student.height);


	}
}

//---------------------------------------------------------------------------------------------

void Get_Middle()
{
	struct SStudent* PFaststudent = PFirststudent;
	struct SStudent* PSlowstudent = PFirststudent;
	int count=0;
	if(PFirststudent == NULL)
	{
		DPRINTF("\nEmpty list");
	}
	else
	{
		while(PFaststudent->PNextstudent)
		{

			PSlowstudent = PSlowstudent->PNextstudent;
			count++;

			if( PFaststudent->PNextstudent->PNextstudent == NULL)
			{
				break;
			}else
			{
				PFaststudent = PFaststudent->PNextstudent->PNextstudent;
			}
		}
		DPRINTF("\nRecord Number %d ",count+1);
		DPRINTF("\n ID : %d",PSlowstudent->Student.id);
		DPRINTF("\n Name : %s",PSlowstudent->Student.name);
		DPRINTF("\n Height : %f",PSlowstudent->Student.height);

	}





}

//---------------------------------------------------------------------------------------------
void Reverse_Students_List()
{

		struct SStudent *pPrevious_Student = NULL;
		struct SStudent *pCurrentStudent = PFirststudent;
		struct SStudent *pNextStudent = NULL;

		if(PFirststudent == NULL)
		{
			DPRINTF("\nThe List is Empty.\n");
		}


		while(pCurrentStudent != NULL)
		{
			pNextStudent = pCurrentStudent->PNextstudent;
			pCurrentStudent->PNextstudent = pPrevious_Student;
			pPrevious_Student = pCurrentStudent;
			pCurrentStudent = pNextStudent;
		}


		PFirststudent = pPrevious_Student;
		DPRINTF("\n======= Reverse is Done =======");

}

//---------------------------------------------------------------------------------------------

void Delete_All()
{
	struct SStudent* PCurrentstudent = PFirststudent;

	if(PFirststudent == NULL)
	{
		DPRINTF("\nEmpty list");
	}
	else
	{

		while(PCurrentstudent)
		{
			struct SStudent* PTempstudent = PCurrentstudent;
			PCurrentstudent = PCurrentstudent->PNextstudent;
			free(PTempstudent);

		}
		PFirststudent = NULL;
	}

}

int main()
{
	char temp_text[40];

	while(1)
	{
		DPRINTF("\n===========================");
		DPRINTF("\n\t choose one of the following Options \n");
		DPRINTF("\n 1: AddStudent  ");
		DPRINTF("\n 2: Delete_Student  ");
		DPRINTF("\n 3: View_Students  ");
		DPRINTF("\n 4: DeleteAll  ");
		DPRINTF("\n 5: GetStudent  ");
		DPRINTF("\n 6: GetLength  ");
		DPRINTF("\n 7: Get Student From The End  ");
		DPRINTF("\n 8: Get the Middle Student  ");
		DPRINTF("\n 9: Reverse Student List  ");
		DPRINTF("\n  Enter Option Number : ");

		gets(temp_text);
		DPRINTF("\n===========================");
		switch(atoi(temp_text))
		{
		case 1:
			addStudent();
			break;

		case 2:
			deleteStudent();
			break;

		case 3:
			View_Students();
			break;

		case 4:
			Delete_All();
			break;
		case 5:

			GetStudent();
			break;

		case 6:

			printf("\n%d",GetLength(PFirststudent));
			break;
		case 7:

			Get_Student_From_End();
			break;
		case 8:

			Get_Middle();
			break;
		case 9:

			Reverse_Students_List();
			break;

		default:
			DPRINTF("\n wrong option");
			break;



		}


	}

	return 0;
}









