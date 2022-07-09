#include<stdio.h>
int main(){
    int Area,radius;
    printf("Enter the radius of circle:");
    scanf("%d",&radius);
    Area=3.14*radius*radius;
    printf("Area of circle is %d having the radius %d",Area,radius);
    return 0;
}