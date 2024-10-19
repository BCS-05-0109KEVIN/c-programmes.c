///FINE FOR OVERDUE LIBRARY BOOKS
#include<stdio.h>
//function prototype
int library();
int main(){
	//initialization and declaration
	// book_id
	int book_id;
	//prompting the user to enter the book id
	printf("\n Enter the book id:");
	scanf("%d",&book_id);

	//prompting the user to enter the book name
	char book_title[10];
	//printing the book title
			  printf("\n Enter the book  name:");
			  scanf("%s",&book_title);

	//prompting the user to enter the author of the book
	char author;

		//printing the author
		printf("\n Enter the author's name:");
		scanf("%s",&author);

	//function call
	int a;
	a=library();
	//end of library program
	printf("\n Thank you for using our library services:%d",a);
return(0);

}

		   int library()
		   {
		   	//days overdue
		   	int due_date,return_date,days_overdue;

		   	//prompting the user to enter the due and return dates
		   	//due_date
		   	printf("\n Enter the due date:");
		   	scanf("%d",&due_date);

		   	//return date
		   	printf("\n Enter the return date:");
		   	scanf("%d",&return_date);

		   	//days overdue
		   	days_overdue=(return_date-due_date);
		   	printf("\n The days overdue are:%d days",days_overdue);

		   	/* fine rates declaration and initialization
		   	fine rate 1
		   	fine rate 2
		   	fine rate 3*/
		   	int fine_rate1=20,
			       fine_rate2=50,
			       fine_rate3=100;
			       //fine amounts initialization
			       float fine_amount1,
				      fine_amount2,
				      fine_amount3;
		//if else conditions
		//fine rate 1 and fine amount 1
		if (days_overdue>=1 && days_overdue<=7)

		{
		printf("\n The fine rate is:%d  ksh",fine_rate1);
		//calculating the fine amount 1
		fine_amount1=(fine_rate1*days_overdue);
		printf("\n The fine amount is:%f ksh ",fine_amount1);
		}

		else if(days_overdue>=8 && days_overdue<=14)
		{
		printf("\n The fine rate is:%d ksh",fine_rate2);
		//calculating the  fine amount 2
		fine_amount2=(fine_rate2*days_overdue);
		printf("\n The fine amount is:%f ksh",fine_amount2);
		}

		else if(days_overdue>=15)
		{
		printf("\n The fine rate is :%d ksh",fine_rate3);

		//calculating fine amount 3
		fine_amount3=(fine_rate3*days_overdue);
		printf("\n The fine amount is:% f ksh",fine_amount3);
		}

		else if(days_overdue<=0)
		{
			printf("\n No fine rate");
			printf("\n No fine amount");
		}
		//return function
		int x=0,y=0;
		return (x-y);
		   }
