
 //C PROGRAM TO STORE STUDENTS DATA
#include <stdio.h>
#include <stdlib.h>
struct student
{
	char name[60];
	int age;
};

int main()
{
	struct student stud1[5],stud2[5];
	FILE*fptr;
		int j;
		fptr=fopen("File.txt","wb");
		for(j=0;j<5;j++)
		{
			fflush(stdin);
			printf("\n Enter the name:");
			gets(stud1[j].name);

			printf("\n Enter the age:");
			scanf("%d",&stud1[j].age);
		}

		fwrite(stud1,sizeof(stud1),1,fptr);
	fclose(fptr);

	fptr=fopen("File.txt","rb");
	fread(stud2,sizeof(stud2),1,fptr);
	for(j=0;j<=5;j++)
	{
		printf("Name:%s \n age:%d",stud2[j].name,stud2[j].age);

		fclose(fptr);
	}
             return(0);
}
