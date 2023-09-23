#include<stdio.h>
#include <math.h>
void volumepolygon(){
    int side,leng,hight;
    const float pi=3.14159;
    float area;
    printf("\n\nEnter column height: ");
    scanf("%d",&hight);
    printf("Enter side length: ");
    scanf("%d",&leng);
    printf("Enter num sides: ");
    scanf("%d",&side);
    area=side*(leng*leng)*((1/tan(pi/side))/4);
    printf("The area of a %d-sided polygon with side %d is %0.2f",side,leng,(float)area*hight);
}
void volumecircle(){
    const float pi=3.14159;
    int a,c;
    printf("\n\nEnter column height: ");
    scanf("%d",&a);
    printf("Enter radius:  ");
    scanf("%d",&c);
    printf(" The volume of a cylinder with radius %d and height %d is %.2f",c,a,(float)(pi*(c*c)*a));
}
void volumetriangle(){
    int a,b,c;
    printf("\n\nEnter column height: ");
    scanf("%d",&a);
    printf("Enter triangle base: ");
    scanf("%d",&b);
    printf("Enter triangle height: ");
    scanf("%d",&c);
    printf(" The volume of a triangle column with sides %d,%d and height %d is %.2f",b,c,a,(float)(a*b*c)/2);
}
void areaofpolygon(){
    int side,leng;
    const float pi=3.14159;
    float area;
    printf("\nEnter side length: ");
    scanf("%d",&leng);
    printf("Enter num sides: ");
    scanf("%d",&side);
    area=side*(leng*leng)*((1/tan(pi/side))/4);
    printf("The area of a %d-sided polygon with side %d is %0.2f",side,leng,area);
}
void areaofcircle(){
    const float pi=3.14159;
    int r;
    printf("\n\nEnter radius: ");
    scanf("%d",&r);
    printf("The area of a circle with radius %d is %.2f",r,pi*r*r);
}
void areaoftriangle(){
    int a,b;
    printf("\n\nEnter base: ");
    scanf("%d",&a);
    printf("Enter height: ");
    scanf("%d",&b);
    float c=(a*b)/2;
    printf("The The area of a triangle with base %d and height %d is %.1f\n",a,b,c);
}
void menu(){
    char n;
    int a=1,b=1;
    area:
    while (a>0){
    printf("\n--------------------------------------------------\n");
    printf("\tArea Calculator\n");
    printf("--------------------------------------------------\n");
    printf("1. Triangle\n");
    printf("2. Circle\n");
    printf("3. Regular Polygon\n");
    printf("C. Change to Volume Mode\n");
    printf("X. EXIT\n");
    printf("--------------------------------------------------\n");
    fflush(stdin);
    printf("Make selection: ");
    scanf("%c",&n);
    switch (n){
        case '1': areaoftriangle();
        break;
        case '2':areaofcircle();
        break;
        case '3':areaofpolygon();
        break;
        case 'c':printf(" Switching to Volume mode\n\n");
        goto volume;
        break;
        case 'x':goto out;
        break;
    }
}
volume:
while(b>0){
    printf("\n--------------------------------------------------\n");
    printf("\tCylinder Volume Calculator\n");
    printf("--------------------------------------------------\n");
    printf("1. Triangle\n");
    printf("2. Circle\n");
    printf("3. Regular Polygon\n");
    printf("C. Change to Area Mode\n");
    printf("X. EXIT\n");
    printf("--------------------------------------------------\n");
    fflush(stdin);
    printf("Make selection: ");
    scanf("%c",&n);
    switch (n){
        case '1': volumetriangle();
        break;
        case '2':volumecircle();
        break;
        case '3':volumepolygon();
        break;
        case 'c':printf(" Switching to Volume mode\n\n");
        goto area;
        break;
        case 'x':goto out;
        break;
    }
}
out:
printf("Exiting....");
}
int main (){
 menu();
}