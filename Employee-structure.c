//program to define a structure employee
#include<stdio.h>
#include<string.h>
//structure definition
struct emloyee
{
    char name[25];
    char department[20];
    char email[50];
    int id;
    float salary;
}employee1;
int main(){
//variables initialization
strcpy(employee1.name,"John Doe");
strcpy(employee1.department,"Human Resources");
strcpy(employee1.email,"john.doe@company.com");
employee1.id=12345;
employee1.salary=55000.50;
//printing the variables
printf("\n Name:%s",employee1.name);
printf("\n Department:%s",employee1.department);
printf("\n Email:%s",employee1.email);
printf("\n ID:%d",employee1.id);
printf("\n Salary:%f",employee1.salary);
return(0);
}
