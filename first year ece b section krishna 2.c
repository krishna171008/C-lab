#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("=====OPERATOR AND EXPRESSIONS=====\n");
	printf ("Enter the first number :");
	scanf ("%d",&a);
	printf ("Enter the second number :");
	scanf ("%d",&b);
	printf("\n_____MENU_____\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulus\n");
	printf("Enter your choice :");
	scanf("%d",&choice);
	switch(choice)
{
    case1:
	  res=a+b;
	  printf("Result=%d",res);
	  break;
	case2:
	  res=a-b;
	  printf("Result=%d",res);
	  break;
	case3:
	  res=a*b;
	  printf("Result=%d",res);
	  break;
	case4:
	  if(b!=0)
	  {
		res=a/b;
		printf("Result=%d",res);
	  }
	  else
	  {
	    printf("Division by zero is not possible.");
	  }
	  break;
	case5:
	  if(b!=0)
	  {
		res=a%b;
		printf("Result=%d",res);
	  }
	  else
	  {
	    printf("Modulus by zero is not possible.");
	  }
	break;
    default:
		{
		  printf("Invalid choice.");
        }
}   
    return 0;
}
