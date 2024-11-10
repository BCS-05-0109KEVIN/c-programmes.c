 //C PROGRAM TO MANAGE SIMPLE TEXT FILE OPERATIONS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//FILE DECLARATION
	FILE*fptr;

	//CREATE A FILE
	fptr=fopen("Output.txt","w");

	 //INITIALIZING A STRING
	 char sentence1[100];

	 //PROMPTING THE USER TO ENTER THE SENTENCE
	 printf("\n Enter a sentence:");
	 scanf("%s",&sentence1);

	 //WRITING THE SENTENCE INSIDE THE FILE
	 fscanf(fptr,"%s",&sentence1);
	 fputs(sentence1,fptr);

	 //OPENING THE FILE IN READ MODE
	 fptr=fopen("Output.txt","r" );

	 /*STORING THE CONTENT OF THE FILE
	 //refer ARRAY(char sentence[100]); */

	//READING THE CONTENT AND STORING IT INSIDE MY STRING
	fgets(sentence1,100,fptr);
	//PRINTING THE FILE CONTENT
	printf("\n File Content: %s",sentence1);

	//APPENDING ANOTHER SENTENCE TO THE FILE
	fptr=fopen("Output.txt","a");
	//Data to append
	fprintf(fptr," \n Sentence.......  ");

	//CLOSING THE FILE
	fclose(fptr);
             return(0);
}
