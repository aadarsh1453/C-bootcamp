                               A job ready bootcamp in C++, DSA & IOT  
Assignment1  


Q.1) Write a program to print Hello Students on the screen.  
Ans: #include<stdio.h>  
 int main()  
 {  
 printf(“Hello Student”);  
 return 0;  
 }  



Q.2) Write a program to print Hello in the first line and Students in the second line.  Ans:  
#include<stdio.h>  
int main()  
{  
 printf(“Hello\nStudent”);  
 return 0;  
}  



Q.3) Write a program to print “MySirG” on the screen. (Remember to print in double quotes)  Ans:  
#include<stdio.h>  
int main()  
{  
 printf("\"MySirG\"");  
 return 0;  
} 



Q.4)WAP to find the area of the circle. Take radius of circle from user as input and print the  result in below given format.  
Expected output format – “Area of circle is A having the radius R”. Replace A with area  & R with radius.  
Ans:  
#include<stdio.h>  
int main()  
{  
 int rad; //radius variable  
 printf("Enter the radius of circle:");  
 scanf("%d",&rad);  
 float A = 3.14*rad*rad;  
 printf("Area of circle is %d having the radius %d",A,rad);  
 return 0;  
}  
  



Q.5)WAP to calculate the length of String using printf function.  
Ans:  
#include<stdio.h>  
int main()  
{  
 int a = printf("Aadarshkumar");  
 printf("%d",a);  
 return 0;  
}  



Q.6)WAP to print the name of the user in double quotes.  
Expected output format – “Hello , Amit Kumar”  
Ans: 
#include<stdio.h>  
int main()  
{  
 printf("\"Hello , Aadarshkumar\"");   return 0;  
}  





Q.7)WAP to print “%d” on the screen.  
Ans:  
#include<stdio.h>  
int main()  
{  
 char a ='%' ,b = 'd'; // also int a = '%',b = 'd';   printf("%c%c",a,b);  
 return 0;  
}  
  
Alternatives  
int main()  
{  
  
 printf("%%d");  
 return(0);  
}  




Q.8)WAP to print “\n” on the screen.  
Ans:  
#include<stdio.h>  
int main()  
{  
 char a = '\', b = 'n'; // also int a = '\' ,b = 'n'; 
 printf("%c%c",a,b);  
 return 0;  
}  
Alternatives  
int main()  
{  
 printf("\\n");  
 return 0;  
}  




Q.9)WAP to print “\\” on the screen.  
Ans:  
#include<stdio.h>  
int main()  
{  
 int a = '\' , b = '\'; // also char a = '\',b = '\';  
 printf("%c%c",a,b);  
 return 0;  
}  




Q.10)WAP to take date as an input in below given format and convert the date format and  display the result as given below.  
User Input date format – “DD/MM/YYYY” (27/11/2022)  
Output format –  
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)  
Ans:  
#include<stdio.h>  
int main()  
{ 
 int dy, mo, yr;  
 printf("Enter the date:");  
 scanf("%d/%d/%d",&dy,&mo,&yr);  
 printf("Day-%d, Month-%d, Year-%d",dy,mo,yr);  
 return 0;  
}  




Q.11)WAP to take time as an input in below given format and convert the time format and  display the result as given below.  
User Input date format – “HH:MM”  
Output format – “HH hour and MM Minute”  
Ans:  
#include<stdio.h>  
int main()  
{  
 int hr,mt;  
 printf("Enter the time:");  
 scanf("%d:%d",&hr,&mt);  
 printf("%d hour and %d minute");  
 return 0;  
}  




Q.12)Find output of below code:  
int main()  
{  
int x = printf(“ineuron”);  
printf(“%d”,x);  
return 0;  
} 
Ans: ineuron7 
