#include <stdio.h>
#include <stdlib.h>
#include "f1.h"
int main()
{
	int a,b;
	int m;
	printf("input a int:\n");
	scanf("%d",&a);
	printf("input b int:\n");
	scanf("%d",&b);
	m = max(a,b);
	printf("max number is:%d",m);
	m = (a,b);
	printf("min number is:%d",m);
	
}
int max(int a,int b)
{
   return a>b?a:b;
}
int min(int a,int b)
{
   return a<b?a:b;
}
