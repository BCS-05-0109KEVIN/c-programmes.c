//c variables and data types
//the format specifiers are included
#include <stdio.h>
int main(){
//initializing and declaration
  int age;
char a;
char name[]={};
float area;
double salary;
//enter the age
printf("\n Enter the age:");
scanf("%d",&age);
//enter the character
printf("\n Enter the character:");
scanf("%c",&a);
//enter the name
printf("\n Enter the name");
scanf("%c",&name);
//enter the string
printf("\n The string is:%s",name);
//enter the area
printf("\n Enter the area:");
  scanf("%f",&area);
//enter the salary
printf("Enter the salary:");
scanf("%lf",&salary);

return(0);
  }
