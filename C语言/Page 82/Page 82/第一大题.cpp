#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,n;
	r=0.1;  n=10;
	p=pow(1+r,n);
	printf("%f%%\n",p/100);
}