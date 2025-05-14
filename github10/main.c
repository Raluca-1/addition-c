#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//suma a doua nr

int main(){
 int a,b,suma=0;
printf("Introduceti valoarea lui a:");
scanf("%d",&a);
printf("Introduceti valoarea lui b:");
scanf("%d",&b);
suma=a+b;
printf("\nSuma dintre cele doua numere %d si %d este:%d",a,b,suma);


getch();
return 0;
}
