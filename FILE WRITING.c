  //c file handling:  writing to a file
#include <stdio.h> //fprintf  fscanf   fclose
#include <stdlib.h>//exit()

int main()
{
int  num;
FILE  *fptr; //file pointer

fptr = fopen("C:\\Users\\susan\\Contacts\\Desktop\\CODEBLOCKS\\area and perimeter of a rectangle\\file.txt","w");
	if(fptr ==NULL)
	{
		printf("\\n Error opening the file");
		exit(1) ;
	}


      printf("\n Enter a random number:");
      scanf("%d",&num);

      fprintf(fptr,"The number entered is:%d",num);
      fclose(fptr);
      printf("\n Number written succesfully");


    return 0;
}
