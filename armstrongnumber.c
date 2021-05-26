#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,x,y,r;
	scanf("%d",&n);
	x=log10(n)+1;
	y=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,x);
		n=n/10;
	}
	if(sum==y)
	printf("yes");
	else
	printf("no");
	return 0;
}
