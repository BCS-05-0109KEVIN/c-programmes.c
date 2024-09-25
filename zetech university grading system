//ZETECH UNIVERSITY GRADING SYSTEM
#include<stdio.h>
int main(){
    //initialization and declaration
    int physics,mathematics,english;
    float average_mark;
    
    //prompting the computer to enter the marks for the respective subjects
    printf("\n Enter the physics mark:");
    scanf("%d",&physics);
    
    //mathematics
    printf("\n Enter the mathematics mark:");
    scanf("%d",&mathematics);
    
    //english
    printf("\n Enter the english mark:");
    scanf("%d",&english);
    
    //calculating the average_mark
    average_mark=(physics+mathematics+english)/3;
    printf("\n The average_mark is:%f",average_mark);
    
    //grading the student
    if(average_mark<0 || average_mark>100)
    {
        printf("\n invalid_input");
    }
    else if(average_mark<39)
    {
        printf("\n Grade E");
        printf("\n Fail");
    }
    else if(average_mark>=40 && average_mark<49)
    {
        printf("\n Grade D");
    }
    else if(average_mark>=50 && average_mark<59)
    {
        printf("\n Grade C");
    }
    else if(average_mark>=60 && average_mark<69)
    {
        printf("\n Grade B");
    }
    else if(average_mark>=70 && average_mark<100)
    {
        printf("\n Grade A");
        printf("\n Excellent");
    }
    
        return(0);
}
