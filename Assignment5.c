                  A Job Ready Bootcamp in C++, DSA & IOT
Assignment5


1) WAP to print the MysirG N-times on screen.
Ans: 
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i=1, N;
		printf("Enter the number:");
		scanf("%d",&N);
		while(i<=N)
		{ 	
			printf("MySirG\n",i);
			i++;
		}
		getch();
	}



2) WAP to print the first N natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i=1, N;
		printf("Enter the number:");
		scanf("%d",&N);
		do
		{
			printf("%d\t",i);
			i++;
		}while(i<=N);
		getch();
	}



3) WAP to print the first N natural number in reverse order.
Ans: 
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i, N;
		printf("Enter the first N-number:");
		scanf("%d",&N);
		for(i=1;i<=N;i++)                           /// for(i=1;i<N+1;i++)     printf("%d\t",N-i);
			printf("%d\t",N+1-i);
		getch();
	}



4) WAP to print the first N odd natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i, N ;
		printf("Enter the first N-number:");
		scanf("%d",&N);
		for(i=1;i<=N;i++)
			printf("%d\t",2*i-1);                // In any loop we will start from any number with repeated sequence.
		getch();
	}

Alternative

	int main()
	{
		int i=1, N;
		printf("Enter the first N-number:");
		scanf("%d",&N);
		if(N %2)
			while(i<=2*N-1)
			{
				if(i%2)
			   	   printf("%d\t",i);
				i++;
			}
		else 
			while(i<=2*N)
			{
				if(i%2)
				   printf("%d\t",i);
				i++;
			}
		getch();
	}




5) WAP to print the first N odd natural number in reverse order.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i ;
		printf("Enter the first N-number:");
		scanf("%d",&N);
		for(i=1;i<=N;i++)
			printf("%d\t",2*N-(2*i-1));
		getch();
	}

Alternate

	int main()
	{
		for(int i=1;i<=2*N;i++)
			if(i%2)
			    printf("%d\t",2*N-i);
		getch();
	}



Alternate

	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i ,N;
		printf("Enter the first N-number:");
		scanf("%d",&N);
		for(i=2*N ; i>=1; i--)            // It execute 2*N + 1 times and 
			if(i%2)                    // It execute 2*N times 
			    printf("%d\t",i);       // It execute N times
		getch();
	}



6) WAP to print the first N even natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{       int N;
		printf("Enter the N number:");
		scanf("%d",&N);
		for(int i=1;i<=N;i++)                 // here asked to print only even natural number not a even which start from zero.d
			
			printf("%d\t",2*i);           // also printf("%d\t",i+i);
		getch();
	}

Alternate

	int main()
	{	
                int i, N;
		printf("Enter the N number:);
		scanf("%d",&N);
		for(int i=1;i<=2*N;i++)
			if(i&1)
			   printf(" ");
			else printf("%d",i);
		getch();
	}



7) WAP to print the first N even natural number in reverse oder.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i, N ;
		printf("Enter the N number:");
		scanf("%d",&N);
		for(i=N; i>1; i--)
			printf("%d ", i+i);
		getch();
	}



8) WAP to print squares of first  natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i, N ;	
		printf("Enter the N number:");
		scanf("%d",&N);
		
		for(i=1,i<=N;i++)
			printf("%d\t",i*i);
		getch();
	}



9) WAP to print cubes of first N natural number.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()	
	{
		int i,N;
		printf("Enter the N natural number:");
		scanf("%d",&N);
		for(i=1;i<=N;i++)
			printf("%d\t",i*i*i);
		getch();
	}



10) WAP to print a table of N.
Ans:
	#include<stdio.h>
	#include<conio.h>
	int main()
	{
		int i, N;
		printf("Enter the N natural number:");
		scanf("%d",&N);
		for(i=1;i<=10;i++)
			printf("%d\n",N*i);
		getch();
	}
