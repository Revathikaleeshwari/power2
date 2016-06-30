#include<stdio.h>
int main()
{
int base,exponent;
long long result=1;
printf("enter a base number:");
scanf("%d",&base);
printf("Enter an exponent:4");
scanf("%d",&exponent);
while(exponent !=0)
{
result*=base;
--exponent;
}
printf("Answer = %11d",result);
return 0;
}
