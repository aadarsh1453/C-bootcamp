//Assignment3             




// WAP to check wheather a given number is positive or non positive.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	if(num >0)
	   printf("%d is positive.", num);
	else
	   printf("%d is non positive.", num);
	getch();
}





// WAP to Check wheather a given number is divisible by 5 or not.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter  a number: ");
	scanf("%d",&num);
	if(num % 5)
	   printf("%d is not divisibe by 5.", num);
	else
	   printf("%d is divisible by 5.", num);
	getch();
}





// WAP to check wheather a given number is even or odd.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	if( num % 2)
	   printf("%d is odd number.", num);
	else 
	   printf("%d is even number.", num);
	getch();
}





// WAP to check wheather a given number is even or odd without % operator.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	if( num & 1)
	   printf("%d is odd number.", num);
	else 
	   printf("%d is even number.", num);
	getch();
}





// WAP to Check Wheather a given number is three digit or not.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	a = num%10;
	b = num/10;
	


}





// WAP to print the greater number between the two number. print once if both numbers are same.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2;
	printf("Enter a number:");
	scanf("%d%d", &num1, &num2);
	if(num1 > num2)
	   printf("%d is greater than %d.", num1, num2);
	else
	   if( num1 == num2)
	      printf("%d is greater.", num1);
	   else
	      printf("%d is greater than %d.", num2, num1);
	getch();
}





// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
#include<conio.h>
int main()
{
	int D, a, b, c;
	printf("Enter the three co-efficient: ");
	scanf("%d%d%d", &a, &b, &c);
	
	D = b*b - 4*a*c;

	if(D == 0)
	  printf("Roots are real and equal.");
	
	else
		if(D > 0)
		   printf("Roots are real and distinct");
		else
		   printf("Roots are imaginary");
	getch();
}





// WAP to Check Wheather a given year is a leap year or not.

#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter a year:");
	scanf("%d", &year);

	if( year % 100 )
	   if( year % 4 )
	      printf("%d is not leap year.", year);
	   else printf("%d is a leap year.", year);

	else
	   if( year % 400)
	      printf("%d is not a leap year.", year);
	   else printf("%d is a leap year.", year);

	getch();
}





// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	if(a > b)

 	   if(b > c)
		printf("%d is greater", a);
	   else 
                if(a > c)
		   printf("%d is greater", a);
	        else printf("%d is greater", c);
	else 
	  
	   if(b > c)
	      printf("%d is greater", b);
	   else printf("%d is greater", c);
	
	getch();
}





// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
#include<conio.h>
int main()
{
	float cp, sp;
	printf("Enter the cost and selling price respectively: ");
	scanf("%f%f", &cp, &sp);

	float profit = sp - cp;

	float loss   = cp - sp;
	
	float pp = profit / cp * 100 ;

	float lp = loss  / cp * 100;

	printf("Profit percentage of product is: %f", pp);
	printf("Loss percentage of product is  : %f", lp);
	
	getch();
}





// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>
#include<conio.h>
int main()
{
	float marks[5];
	int i=0;
	printf("Enter the marks of subject: ");
	do 
	{
	   scanf("%f", &i[marks]);
	   i++;
	}while(i <= 4);

	i=0;
	while(i<=4)
		if(marks[i]<33)
		{  
		  printf("Candidate fail in examination.");
		
		  break;
		}
		else if(i==4) 
			break;
	
	getch();
}





// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
#include<conio.h>
int main()
{
	char  ch;
	printf("Enter a character:");
	scanf("%c", &ch);
	if(ch >= 65 && ch<= 90)
		printf("%c an alphabet in uppercase.", ch);
	else
		if(ch>= 97 &&  ch<=122)
		   printf("%c an alphabet in lowercase.", ch);
		else printf("%c isn't alphabet.", ch);

	getch();
}



 

// Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);

	if(num % 2)
	   
	   if(num % 3)
		printf("%d is not divisible by 2 and 3.", num);

		
	   else printf("%d is divisible by 3 but not 2.", num);

	else 
	   if(num % 3)
		printf("%d is divisible by 2 but not 3.", num);

	   else printf("%d is divisible by 2 and 3.", num);
	
	getch();
}





// Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);

	if(num % 7)
	   
	   if(num % 3)
		printf("%d is not divisible by 7 and 3.", num);

		
	   else printf("%d is divisible by 3 but not 7.", num);

	else 
	   if(num % 3)
		printf("%d is divisible by 7 but not 3.", num);

	   else printf("%d is divisible by 7 and 3.", num);
	
	getch();
}





// Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	
	if(num >0)
	   printf("%d is positive", num);
	else
	   if(num == 0)
	      printf("%d is zero", num);
	   else printf("%d is negative", num);

	getch();
}





// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include<stdio.h>
#include<conio.h>
int main()
{

	char  ch;
	printf("Enter a character:");
	scanf("%c", &ch);

	if(ch >= 65 && ch<= 90)
		printf("%c an alphabet in uppercase.", ch);

	else
		if(ch>= 97 &&  ch<=122)
		   printf("%c an alphabet in lowercase.", ch);

		else 
		   if(ch >= 48 && ch<= 57)
			printf("%c is a digit.", ch);
		   else
			printf("%c is a special character.", ch);

	getch();
}





// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>
#include<conio.h>
int main()
{
	int _1side, _2side, _3side;

	printf("Enter the three sides of triangle: ");
	scanf("%d%d%d", &_1side, &_2side, &_3side);
	
	if(_1side + _2side > _3side && _1side + _3side > _2side && _2side + _3side > _1side)      // If sum of any two sides of triangle is greater than third side is a valid triangle.

	   printf("Given sides of triangle measured and triangle is valid.");

	else printf("By measuring the sides of triangle is invalid.");

	getch();
}





// Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
#include<conio.h>
int main()
{
	int month;
	printf("Enter a month numbers:");
	scanf("%d", &month);
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)

		printf("Number of days in %d month is: 31", month);
	else

		if(month == 2)
			printf("Number of days in %d month is: 28/29", month);
		else
			printf("Number of days in %d month is: 30", month);
	getch();
}



