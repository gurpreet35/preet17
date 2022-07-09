#include<stdio.h>
int main(){
    int HH,MM;
    printf("Enter Hour and Minutes:");
    scanf("%d%*[:]%d",&HH,&MM);
    printf("%d hour and %d Minute",HH,MM);
    return 0;
}