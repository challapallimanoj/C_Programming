#include<stdio.h>
int main()
{ 
  int a;
  float b;
  double c;
  char v;
	scanf("%d%f%lf %c",&a,&b,&c,&v);
	printf("%d %f %lf %c",a,b,c,v);
	return 0;
}
//sample input:
// 1
// 1.2
// 1.222
// T
// sample output:
// 1 1.2 1.222 T
