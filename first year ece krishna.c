#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("===== BRANCHING STATEMENT =====\n");
	printf("Enter the first number :");
	scanf ("%d",&a);
	printf("Enter the second number :");
	scanf ("%d",&b);
    printf("\n_____MENU_____\n");
	printf("1. check Positive,Negative or Zero\n");
	printf("2. check Even or Odd\n");
	printf("3. Find Largest of Two number\n");
	printf("4. check Divisibility by 5\n");
	printf("\n Enter your choice :");
	scanf ("%d",&choice);
	printf("\n_____RESULT_____\n");
	switch(choice)
	{
		case 1 :
			if(a>0)
			 printf("%d is Positive",a);
			else if (a<0)
			 printf("%d is Negative",a);
			else
			 printf("%d is Zero",a); 
			break;
		case 2 :
			if(a%2==0)
			 printf("%d is Even",a);
			else
			 printf("%d is Odd",a);
			break;
		case 3 :
			if(a>b)
			{
		      printf("%d is the Largest number",res);
		    }
			else if (b<a)
			{
			  res=b;
			  printf("%d is the Largest number",res);	
			} 
			else
			{
			  printf("Both number are Equal");
			}
			break;
		case 4 :
			if(a%5==0)
			 printf("%d is Divisible by 5",a);
			else
			 printf("%d is Not Divisible by 5",a);
			break;
			default:
			 printf("Invalid choice");
	}
	return 0;
}
