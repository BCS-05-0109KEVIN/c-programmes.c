//Arrays program
#include<stdio.h>
int main(){
//ARRAY INITIALIZATION
int scores[2][2]={
    {{65,84},{92,72}},
    {{35,59},{70,67}}
};
int i;
int j;
//PRINTING THE VARIABLES OF THE ARRAY
//USING NESTED FOR LOOP
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    printf("\n scores [%d][%d]=%d",i,j,scores[i][j]);
        }
    }

return(0);
}
