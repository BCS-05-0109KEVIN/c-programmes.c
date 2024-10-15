//PROGRAM TO CALCULATE FINE FOR OVERDUE LIBRARY BOOKS
#include<stdio.h>
int main(){
    //input from the library department
char book_title[20],author[20];
    //input from the user
    char name[100];
    int book_id,due_date,return_date;
    //input from the system
    int fine_rate1=20,fine_rate2=50,fine_rate3=100;
    int fine_amount1,fine_amount2,fine_amount3;
    float days_overdue;
    
    //printing the details from the library department
    //book title
    printf("\n Enter the title:");
    scanf("%s",book_title);
    //author
    printf("\n Enter the author:");
    scanf("%s",author);
    
    //displaying details from the library department
    printf("\n book title:%s",book_title);
    printf("\n Author:%s",author);
    
    //displaying the details from the user
    //name
  // Taking input from the user
    printf("\n Enter Your Name: ");
    scanf("%s", name);

    // Printing your name to the screen
    printf("\n The book have been issued to: %s", name);
    
    //book_id
    printf("\n Enter the book_id:");
    scanf("%d",&book_id);
    
    //due_date
    printf("\n Enter the due_date:");
    scanf("%d",&due_date);
    
    //return due_date
    printf("\n Enter the return_date:");
    scanf("%d",&return_date);
    
    //calculating the days overdue
days_overdue=(return_date-due_date);
printf("\n The days overdue are:%f",days_overdue);

//fine
if(days_overdue<1)
{
    printf("\n The fine is 0ksh");
}

//calculating the fine amount1
fine_amount1=(fine_rate1*days_overdue);
if(days_overdue>=1 && days_overdue<=7)
{
    printf("\n The fine rate is:%d ksh",fine_rate1);
    printf("\n The fine amount is:%d ksh",fine_amount1);
}

//calculating fine fine_amount2
fine_amount2=(fine_rate2*days_overdue);
if(days_overdue>=8 && days_overdue<=14)
{
    printf("\n The fine rate is:%d ksh",fine_rate2);
    printf("\n The fine amount is:%d ksh",fine_amount2);
}

//calculating fine fine_amount3
fine_amount3=(fine_rate3*days_overdue);
if(days_overdue>=15)
{
    printf("\n The fine rate is:%d ksh",fine_rate3);
    printf("\n The fine amount is:%d ksh",fine_amount3);
}
//concluding
printf("\n Thank you for using our library services");
return(0);
}
