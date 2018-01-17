#include<stdio.h>
#include<conip.h>
void main()
{
int a,b,c;
printf("Enter value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
printf("Enter the value of c");
scanf("%d",&c);
if(a>b && a>c)
{
printf("a is great ");
}
elseif(b>a && b>c)
{
printf(" b is great ");
}
elseif(c>a && c>b)
{
printf("c is great");
}
getch();
}
