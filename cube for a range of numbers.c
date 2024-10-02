//program to calculate the cube of a given range of integers
#include <stdio.h>
int main(){
//use for,do while and while
//initialization and declaration
int k;
int cube;
int start_point,finish_point;

//prompt the user to enter the integer
printf("Enter a variable integer k:");
scanf("%d",&k);

//The start and the finish points
printf("Enter the start point:");
scanf("%d",&start_point);
printf("Enter the finish point:");
scanf("%d",&finish_point);

//loop description
for(k=1;k<=5;k++)
{
	//the cube is equal to
	cube=(k*k*k);

	//The numbers and their cubes
    printf("\n The number is %d",k);
    printf("\n The cube is:%d",cube);
}
    return 0;
}
