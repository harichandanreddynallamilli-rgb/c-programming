#include<stdio.h>
int main(){
	inta,b,cmax;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c/a:c):(b>c?b:c);
	printf("Largest among the three numbers is %d",max);
	return 0;
}
