 //C PROGRAM TO STORE STUDENTS DATA
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	//INITIALIZATION AND DECLARATION
	char name[50];
	int marks,j,num;

	//PROMPTING THE USER TO ENTER THE STUDENT DETAILS
	printf("\n Enter the number of students:");
	scanf("%d",&num);

	//OPENING THE FILE IN WRITE MODE
	  FILE*fptr;
	  fptr=fopen("Student.txt","w");
	  if(fptr==NULL)
	  {
	  	printf("Error");
	  	exit (1);
	  }
			 //FOR CONDITION
			 for(j=0;j<num;j++)
			 {
			 	printf("For student:%d \n Enter the name:",j+1);
			 	scanf("%s",name);
			 	printf("\n Enter the marks:");
			 	scanf("%d",&marks);
			 	fprintf(fptr,"\n Name: \n Marks=%d \n" ,name,marks);
			 }
		      fptr=fopen("Student.txt","a");
		      
	//CLOSING THE FILE
	fclose(fptr);
             return(0);
}
