#include<stdio.h>
void main()
{
int a,b;
printf("enter value of a =");
scanf("%d",&a);

printf("enter value of b =");
scanf("%d",&b);

a=a+b;//a=3
b=a-b;//b=1
a=a-b;//a=2

printf("a is =%d b is =%d",a,b);
}