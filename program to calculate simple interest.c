//program to calculate simple interest
#include <stdio.h>
int main(){
    //variables introduction
    int principle;
    int rate;
    int period;
    float simple_interest;
    //enter the principle
    printf("\n Enter the principle",principle);
    scanf("%d",&principle);
    //enter the rate
    printf("\n Enter the rate",rate);
    scanf("%d",&rate);
    //enter the period
    printf("Enter the period",period);
    scanf("%d",&period);
    //simple interest corresponds to principle by rate by time devided by 100
    simple_interest=(principle*rate*period)/100;
    printf("The simple_interest is:%f",simple_interest);
    return(0);
}
