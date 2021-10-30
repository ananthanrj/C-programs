#include <stdio.h>
#include<math.h>
int Fibonacci(int);
main()
{
int n;
printf("\n Enter the number of terms in the series: ");
scanf("%d", &n);
for(int i=0;i<n;i++)
printf("\n Fibonacci (%d) = %d", i, Fibonacci(i));
return 0;
}
int Fibonacci(int num)
{
if(num==0)
return 0;
else if(num==1)
return 1;
else
return (Fibonacci (num - 1) + Fibonacci(num - 2));
}
