//program to calculate volume and surface area of a cylinder
#include <stdio.h>
int main() {
    // variables initialization
int radius;
int height;
float volume;
float surface_area;
//constant
float pi=(3.142);
//enter the radius
printf("\n Enter the radius",radius);
scanf("%d",&radius);
//enter the height
printf("\n Enter the height",height);
scanf("%d",&height);
//calculating the volume
volume=(pi)*radius*radius*height;
printf("\n The volume is :%f cm^3",volume);
//calculating the surface_area
surface_area=(2*(pi)*radius*height)+(2*(pi)*radius*radius);
printf("\n The surface area is:%f cm^2",surface_area);
    return 0;
}
