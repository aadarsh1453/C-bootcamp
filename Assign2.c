                               A Job Ready Bootcamp In C++, DSA and IOT
Assignment 2

1) WAP to print unit digit of a number.
Ans:
	#include<stdio.h>
	{
	        int num;
	        printf("Enter the number:");
		scanf("%d",&num);
		int a = num%10;
		printf("Unit digit of a number is: %d",a);
		getch();
	}


2) WAP to print the number without last digit.
Ans:
	#include<stdio.h>
	{
		int num;
		printf("Enter the number:");
		scanf("%d",&num);
		int a = num / 10;
		printf("Number without last digit is: %d",a);
		getch();
	}


3) Write a program to swap the value of two int variable.
Ans:
	#include<stdio.h>
	{
		int a, b;
		printf("Enter the two number:");
		scanf("%d%d",&a,&b);
		c = a;
		a = b;
		b = c;
		printf("Swap values of a and b is: %d and %d",a,b);
		getch();
	}


4) WAP to Swap the data of two int variable without third variable.
Ans:
	#include<stdio.h>
	{
		int a, b;
		printf("Enter the data of a and b:");
		scanf("%d%d",&a,&b);
		a = a+b;
		b = a - b;
		a = a - b;
		printf("Swap values of a and b is: %d and %d",a,b);
	}

ALTERNATES

	#include<stdio.h>
	{
		int a, b;
		printf("Enter the data of a and b:");
		scanf("%d%d",&a,&b);
		a = a | b;
		b = a & b;
		a = a & b;
		printf("Swap values of a and b is: %d and %d",a,b);
		getch();
	}


5) WAP to take input digit number and display sum of three-digit number.
Ans:
	#include<stdio.h>
	{
		int num,a ,b,c;
		printf("Enter the three digit number:");
		scanf("%d",&num);
		a = num % 10;
		b = num / 10;
		c = b   % 10;
		a = a + c + b / 10;
		printf("Sum of enter three-digit number is: %d",a);
		getch();
	}


6) WAP which takes character as input and print the its ASCII code.
Ans:
	#include<stdio.h>
	{
		char ch_var ;
		printf("Enter the character:");
		scanf("%c",&ch_var);
		printf("ASCII code of %c is: %d",ch_var);
		getch();
	}

ALTERNATE

	#include<stdio.h>
	{
		int ch_var ;
		printf("Enter the charater:");
		scanf("%c",&ch_var);
		printf("ASCII code of %c is: %d",ch_var);
		getch();
	}



7) Write a program to find the position of first 1 in LSB.
Ans: 
	#include<stdio.h>
	int main()
	{
		int num;
		printf("Enter a number: ");
		scanf("%d,&num);
		if (a%

8) Write a program to check whether the given number is even or odd using a bitwise
operator.
Ans:
	#include<stdio.h>
	int main()
	{
		int num;
		printf("Enter a number: ");
		scanf("%d", &num);
		num%2 ? printf("%d is odd",num) : printf("%d is even", num) ;
		return 0;
	}

9) WAP to print the size of int, float, char, double data type of variables.
Ans:
	#include<stdio.h>
	int main()
	{
		int    num;
		float  num1;
		char   num2;
		double num3;
		printf("Size of int, float, char, and double variables are: %d, %d, %d and %d",sizeof(num), sizeof(num1), sizeof(num2) ,sizeof(num3));
		getch();
	}



10) WAP to make a last digit of the number stored in a variable as zero.
Ans:
	#include<stdio.h>
	int main()
	{
		int num, c, b;
		printf("Enter the number: ");
		scanf("%d", &num);
		b = num%10;
		c = num - b;
		printf("The number with last digit zero is: %d",c);
		return 0;
	}



11) WAP to input the number from the user and also input a digit.Append the input digit in number and print 
resulting number.
Ans:
	#include<stdio.h>
	int main()
	{
		int num, dgt;
		printf("Enter a number and a digit: ");
		scanf("%d%d", &num, &dgt);
		b = num * 10;
		c = b + dgt;
		printf("The resulting number is: %d",c);
		return 0;
	}



12) Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
Ans:
	#include<stdio.h>
	int main()
	{
		double rupee, doller;
		printf("Enter an amount in INR: ");
		scnaf("%lf",&rupee);
		doller = rupee/ 76.23;
		printf("INR in USD is: %lf", doller);
		return 0;
	}



13) Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.
Ans:
	#include<stdio.h>
	int main()
	{
		int num, a, b, d ;
		printf("Enter the number:");
		scanf("%d",&num);
		b = num % 10 ;
		d = num / 10 ;
		a = b * 100 + d;
		printf("Resulting number is: %d",a);
		return 0;
	}
