        A Job Ready Bootcamp in C++, DSA & IOT 
Assignment4  


1) WAP to print the MysirG 5-times on screen.  
Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 int i=1;  
 while(i<=5)  
 {  
 printf("MysirG\t",i);  
 i++;  
 }  
 getch();  
 }  




2) WAP to print the first 10 natural number.  
Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 int i=1;  
 do 
 {  
 printf("%d\t",i);  
 i++;  
 }while(i<=10);  
 getch();  
 }  




3) WAP to print the first 10 natural number in reverse order.  Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 int i;  
 for(i=1;i<=10;i++)  
 printf("%d\t",i);  
 getch();  
 }  




4) WAP to print the first 10 odd natural number.  Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 int i ;  
 for(i=1;i<=10;i++) 
 printf("%d\t",2*i-1); // In any loop we will start from any number  with repeated sequence.  
 getch();  
 }  
Alternative  
 int main()  
 {  
 int i=1;  
 while(i<=19)  
 {  
 if(i%2)  
 printf("%d\t",i)  
 i++;  
 }  
 getch();  
 }  




5) WAP to print the first 10 odd natural number in reverse order.  
Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 int i ;  
 for(i=1;i<=10;i++)  
 printf("%d\t",20-(2*i-1)); 
 getch();  
 }  
Alternate  
 int main()  
 {  
 for(int i=1;i<=20;i++)  
 if(i%2)  
 printf("%d\t",20-i);  
 getch();  
 }  




6) WAP to print the first 10 even natural number.  
Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 for(int i=0;i<=10;i++)  
  
 printf("%d\t",2*i); // also printf("%d\t",i+i);   getch();  
 }  
Alternate  
 int main()  
 { 
 for(int i=0;i<=20;i++)  
 if(i%2==0)  
 printf("%d\t",2*i);   getch();  
 }  




7) WAP to print the first 10 even number in reverse oder.  Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 for(int i=0;i<=9;i++)  
 printf("%d\t", 18 - 2*i);   getch();  
 }  





8) WAP to print squares of first 10 natural number.  Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 int i;  
 for(i=1,i<=10;i++)  
 printf("%d\t",i*i);  
 getch(); 
 }  




9) WAP to print cubes of first 10 natural number.  Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 int i;  
 for(i=1;i<=10;i++)  
 printf("%d\t",i*i*i);   getch();  
 }  





10) WAP to print a table of 5.  
Ans:  
 #include<stdio.h>  
 #include<conio.h>  
 int main()  
 {  
 int i;  
 for(i=1;i<=10;i++)  
 printf("%d\n",5*i);   getch();  
 } 

