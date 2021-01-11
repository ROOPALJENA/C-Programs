#include<stdio.h>
int Fibbo(int x)
{
	if(x==0)
	return 0;
	else if(x==1 || x==2)
	return 1;
	else 
	return Fibbo(x-1) + Fibbo(x-2);
}
 int main()
 {
 	int n;
 	printf("Enter a number: ");
 	scanf("%d",&n);
 	printf("Fibonacci Series = %d",Fibbo(n));
 }
