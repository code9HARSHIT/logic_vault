#include<stdio.h>
#include<math.h>
int fact();
int main()
{
int res;
printf("Enter a Number to Find Factorial: ");
res=fact();
printf("\nFactorial of a Given Number is: %d ", res);
}
int fact()
{

int i, fact=1,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	fact=fact*i;
}
return fact;
}
