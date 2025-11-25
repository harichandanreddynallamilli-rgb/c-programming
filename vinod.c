#include<stdio.h>
int main() {
	int a;
	float b;
	char ch;
	char st[101];
	printf("Enter a integer\n");
	scanf("%d",&a);
	printf("Enter a float number\n");
	scanf("%f",&b);
	printf("Enter a character\n");
	scanf(" %c",&ch);
	printf("Enter a string");
	scanf("%s",&st);
	printf("%d\n%f\n%c\n%s",a,b,ch,st);
	return 0;
	
}
