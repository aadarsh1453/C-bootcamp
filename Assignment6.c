			                                          A Job Ready Bootcamp in C++, DSA & IOT
Assignment6


// Write a program to calculate sum of first N natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i, sum=0, N ;
		printf("Enter the Number:");
		scanf("%d",&N);
		for(i=1; i<=N; i++)
			sum = sum + i;                                               // sum = N*(N+1)/2 ;
		printf("Sum of first N natural number is: %d", sum);
		getch();
	}






// WAP to calculate sum of first N odd natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i , sum=0 ,N;
		printf("Enter the Number:");
		scanf("%d",&N);
		for(i=1 ; i<=2*N ; i++)
			if(i%2)
			   sum = sum + i;
		printf("Sum of first %d odd natural number is: %d", N, sum);
		getch();
	}






// WAP to calculate the sum of first N even natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int N , sum;
		printf("Enter the n number:");
		scanf("%d",&N);
		for(int i=1; i<= N ; i++)
			if(i%2==0)
			  sum = sum + i;
		printf("Sum of first %d even natural number is: %d",N, sum);
		getch();

	}






// WAP to calculate the sum of square of first n natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int N , sum ;
		printf("Enter the N number:");
		scanf("%d",&N);
		for(i=1;i<=N; i++)
			sum = sum + i*i;
		printf("Sum of sqaure of first %d natural number is: %d",N,sum);
		getch();
	}






// WAP to calculate sum of cubes of first N natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int N , sum;
		printf("Enter the N number:");
		scanf("%d",&N);
		for(int i=1; i<=N ; i++)
			sum = sum + i*i*i;
		printf("sum of cubes of first %d natural number: %d",N , sum);
		getch();
	}






// WAP to calculate the factorial of number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int N, i, fact=1;
		printf("Enter the N number:");
		scanf("%d",&N);
		for(i=N ; i>0 ; i--)
			fact = fact * i;
		printf("factorial of %d is: %d", N, fact);
		getch();
	}
			





// Write a program to count digit in number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int  count=0; a, b, i;
		printf("Enter the number:");
		scanf("%d",&a);
		for(i=1;  a ; i++)
		   {
			b=a%10;			
			a=a/10;
			count++;
		   }
		printf("Number of digit in given number is: %d",count);
		getch();
	}
			

		



// Write a program to check whether a given number is a Prime number or not.
Ans:
	#include<stdio.h>

	#include<conio.h>
	int main()
	{ 
		int num, rem, i;
		printf("Enter a number: ");
		scanf("%d", &num);
		
		for(i=2; i<=num/2; i++)
		{
			rem = num % i;
			if( rem == 0)
			{
			   printf("Not prime");
			   break;
			}
		}

		if(num >=2 && i > num/2)
		  printf("prime");

		getch();

	}






// Write a program to print all prime number under N natural number.

	#include<stdio.h>

	#include<conio.h>
	int main()
	{ 
		int num, a, rem, i;
		printf("Enter a number: ");
		scanf("%d", &a);
		for(num =2; num<=a; num++)
		{
			
		for(i=2; i<=num/2; i++)
		{
			rem = num % i;
			if( rem == 0)
		
			   break;
		
		}

		if(num >=2 && i > num/2)
		  printf("%d ",num);


		}
		getch();

	}






// Write a program to calculate LCM of two numbers

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, i;

	printf("Enter a number: ");
	scanf("%d%d", &a, &b);

	for (i=1; i<= a*b; i++)
	{
		if( i%a==0 && i%b==0)
		   break;


	}
	if(a >= 1 && b>=1)
	   printf("L.C.M of %d and %d number is: %d", a, b, i);


}





// Write a program to calculate HCF of two number.


#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, i;
    printf("Enter two number: ");
    scanf("%d%d", &a ,&b);

    if(b>a)
    {

	for(i=1; a  ; i++)
	{
	    c = b % a;
	    b = a;
	    a = c;

	}

	printf("HCF of given numbers: %d", b);
    }

    else
    {

      for(i=1; b ; i++)
      {
        c = a % b;
        a = b;
        b = c;
      }
      printf("HCF of given numbers: %d", a);

    }

    getch();
}





// Write a program to reverse a given number

#include<stdio.h>
#include<conio.h>
int main()
{
	int num, a =0, b, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	

	for(i=1; num; i++)
	{
	   b   = num % 10;
	   num = num / 10;	 
	 	
	   a   = a*10 + b;

	 
	}
	printf("The reverse number is: %d", a);

	getch();
}



