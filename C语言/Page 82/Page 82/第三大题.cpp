#include<stdio.h>
#include<math.h>
int main()
{
	float d,p,r,m;
	p=6000;
	r=0.01;
	d=300000;
	m=log10(p/(p-d*r))/log10(1+r);
	printf("m=%0.2f\n",m);
	return 0;
}