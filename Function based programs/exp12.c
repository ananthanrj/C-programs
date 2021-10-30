#include<stdio.h>
#include<math.h>
int exp(int n1,int n2);
int main()
{
int base, a , result;
printf("Enter base number:");
scanf("%d",&base);
printf("Enter power number:");
scanf("%d",&a);
result=exp(base,a);
printf("%d^%d=%d", base,a,result);
return 0;
}
int exp(int base, int a)
{
if (a!=0)
return(base*exp(base,a-1));
else
return 1;
}