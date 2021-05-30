#include<stdio.h>
int main()
{
	int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b&&a>c)?a:((b>c)?b:c);
	printf(" max among three is%d",max);
	return 0;
}

// sample output:
//  1 2 3
// max among three is 3
