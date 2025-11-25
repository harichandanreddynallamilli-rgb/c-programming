 #include<stdio.h>
 int main(){
 	char op;
 	double first ,second;
 	printf("Enter an operands(+,-,*,/):");
 	scanf("%c",&op);
 	printf("Enter two operands:");
 	scanf("%1f%f",&first,&second);
 	switch (op){
	 case '+':
	 	printf("%.11f+%.11f=%11f",first,second,first+second);
	 	break;
	 case '-':
	    printf("%.11f-%.11f=%.11f",first,second,first-second);
	    break;
	 case '*':
	 	 printf("%.11f*%.11f=%.11f",first,second,first*second);
         break;
     case '/':
	     printf("%.11f/%.11f=%.11f",first,second,first/second);
		 break;
		 default:
		  printf("Error!operator is not correct");
	}
	 return 0;
}
		   
	       
	  
 
