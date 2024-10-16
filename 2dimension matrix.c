//program to write a 2d matrix
#include<stdio.h>
int main(){
int x,y,z;
	int matrix[2][2][3]={
	{{10,11,12},
           {23,24,25},
            },
		{{33,34,35},
		{43,44,45},
                        }
		};
		for(x=0;x<2;x++){
			for(y=0;y<2;y++){
					for(z=0;z<3;z++){
					{
				printf("\n matrix [%d][%d][%d]=%d",x, y, z, matrix[x][y][z]);
				}
			}
	            }
	}
return(0);

		}
