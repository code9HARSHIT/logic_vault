#include<stdio.h>
int main()
{
	int n, r, sum=0;
printf("Enter the number to reverse: ");
scanf("%d",&n);
const int g=n;
while(n>0)
{

r=n%10;
sum = (sum*10)+r;
n=n/10;

}

if(sum==g)
{
	printf("Palindrome");
}
else
{
printf("Not Palindrome");	
	
}
	
}
