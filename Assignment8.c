
//
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    int i, a, z=1;
//    i=1; a =3;
//    z -=- 1;
//    printf("%d %d",z,a);
//}

//*
//
//*  *
//
//*  *  *
//
//*  *  *  *
//
//*  *  *  *  *

//int main()
//{
//    int i, j, k;
//    for(i=1; i<=5; i++)
//    {
//        k=1;
//        for(j=1; j<=5; j++)
//            if(j<=i)
//            printf("* ");
//            else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}




//            *
//
//         *  *
//
//      *  *  *
//
//   *  *  *  *
//
//*  *  *  *  *



//int main()
//{
//    int i, j, k;
//    for(i=1; i<=5; i++)
//    {
//        for(j=1; j<=5; j++)
//            if(j>=6-i)
//               printf("* ");
//            else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}


//*  *  *  *  *
//
//*  *  *  *
//
//*  *  *
//
//*  *
//
//*


//int main()
//{
//    int i, j, k;
//    for(i=1; i<=5; i++)
//    {
//        for(j=1; j<=5; j++)
//            if(j<=6-i)
//               printf("*  ");
//            else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}


//*  *  *  *  *
//
//   *  *  *  *
//
//      *  *  *
//
//         *  *
//
//            *


//int main()
//{
//    int i, j, k;
//    for(i=1; i<=5; i++)
//    {
//        for(j=1; j<=5; j++)
//            if(j>=i)
//               printf("* ");
//            else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}


//            *
//
//         *  *  *
//
//      *  *  *  *  *
//
//   *  *  *  *  *  *  *
//
//*  *  *  *  *  *  *  *  *


//int main()
//{
//    int i, j, k;
//    for(i=1; i<=5; i++)
//    {
//        for(j=1; j<=9; j++)
//            if(j>=6-i && j<=4+i)
//               printf("* ");
//            else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}


//*  *  *  *  *  *  *  *  *
//
//   *  *  *  *  *  *  *
//
//      *  *  *  *  *
//
//         *  *  *
//
//            *



//int main()
//{
//    int i, j, k;
//    for(i=1; i<=5; i++)
//    {
//        for(j=1; j<=9; j++)
//            if(j>=i && j<=10-i)
//               printf("* ");
//            else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}




//*  *  *  *  *  *  *  *  *  *
//
//*  *  *  *        *  *  *  *
//
//*  *  *              *  *  *
//
//*  *                    *  *
//
//*                          *



int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=10; j++)
            if(j<=6-i)
              printf("* ");
            else
            if (j>=5+i)
              printf("* ");
            else printf("  ");
        printf("\n\n");
    }
    getch();
}



























//      1
//    1 2 1
//  1 2 3 2 1
//1 2 3 4 3 2 1
//
//int main()
//{
//    int a, i, j, z, k;
//    for(i=1; i<=4; i++)
//    {
//        k=1;
//            a=i;
//        for(j=1; j<=7; j++)
//        {
//        if(j>=5-i && j<=4)
//        {
//            z = k;
//            printf("%d ",k);
//            k++;
//        }
//        else
//        if(j>=5 && j<=3+i)
//        {
//            z--;
//            printf("%d ",z);
//        }
//        else printf("  ");
//        }
//        printf("\n");
//    }
//    getch();
//}



//
//
//1234321
// 12321
//  121
//   1


//int main()
//{
//    int i, a, j, k;
//    for(i=1; i<=4; i++)
//    {
//        k=1; a=0;
//        for(j=1; j<=7; j++)
//        if(j>=i && j<=4)
//        {
//            printf("%d ",k);
//            k++;
//            a++;
//        }
//        else
//        if(j>=5 && j<=8-i)
//        {
//            a--;
//            printf("%d ",a);
//        }
//        else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}





//
//
//1 2 3 4 3 2 1
//
//1 2 3   3 2 1
//
//1 2       2 1
//
//1           1
//
//int main()
//{
//    int i, j, k, a;
//    for(i=1; i<=4; i++)
//    {
//        k=1;
//        a=0;
//        for(j=1; j<=7; j++)
//        if(j>=1 && j<=5-i)
//        {
//            printf("%d ",k);
//            k++;
//            a++;
//        }
//        else
//        if(j>=3+i && j<=7)
//        {
//            a--;
//            printf("%d ",a);
//        }
//        else
//        if(j<=4)
//        {
//            a++;
//            printf("  ");
//
//        }
//        else
//        {
//            a--;
//            printf("  ");
//        }
//        printf("\n\n");
//    }
//    getch();
//}


//
//        A
//
//      A B A
//
//    A B C B A
//
//  A B C D C B A
//
//A B C D E D C B A
//
//
//int main()
//{
//    int a, j, i, k;
//    for(i=1; i<=5; i++)
//    {
//        a= 'A';
//        for(j=1; j<=9; j++)
//        if(j>=6-i && j<=5)
//        {
//            printf("%c ",a);
//            k = a;
//            a++  ;
//        }
//        else
//        if(j>=6 && j<=4+i)
//        {
//            k--;
//            printf("%c ",k);
//
//        }
//        else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}




//A B C D C B A
//
//  A B C B A
//
//    A B A
//
//      A
//
//
//int main()
//{
//    int a, i, j, k;
//    for(i=1; i<=4; i++)
//    {
//        a='A';
//        for(j=1; j<=7; j++)
//        if(j>=i && j<=4)
//        {
//            printf("%c ", a);
//            k = a;
//            a++  ;
//
//        }
//        else
//        if(j>=5 && j<=8-i)
//        {
//            k--;
//            printf("%c ",k);
//        }
//        else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}



//A B C D E F G F E D C B A
//
//A B C D E F   F E D C B A
//
//A B C D E       E D C B A
//
//A B C D           D C B A
//
//A B C               C B A
//
//A B                   B A
//
//A                       A
//
//
//
//int main()
//{
//    int a, b, i, j;
//    for(i=1; i<=7; i++)
//    {
//        a = 'A';
//        for(j=1; j<=13; j++)
//        if(j>=1 && j<=8-i)
//        {
//            printf("%c ",a);
//            b = a;
//            a++  ;
//        }
//        else
//        if(j>=6+i && j<=13)
//        {
//            b--;
//            printf("%c ",b);
//        }
//        else
//        if(j<=7)
//        {
//            b =a;
//            a++ ;
//            printf("  ");
//        }
//        else
//        {
//            b--;
//            printf("  ");
//        }
//        printf("\n\n");
//    }
//    getch()   ;
//}


//        *
//
//      *   *
//
//    *       *
//
//  *           *
//
//* * * * * * * * *
//
//
//int main()
//{
//    int a, b, j, i;
//    for(a=1; a<=5; a++)
//    {
//        for(j=1; j<=9; j++)
//        if(j==6-a && j<=4+a)
//           printf("* ");
//        else
//        if(j==4+a && j==4+a)
//           printf("* ");
//        else
//        if(a==5)
//        printf("* ");
//        else printf("  ");
//        printf("\n\n");
//
//    }
//    getch();
//}


//*
//
//* *
//
//*   *
//
//*     *
//
//* * * * *
//
//
//int main()
//{
//    int a, b;
//    for(a=1; a<=5; a++)
//    {
//        for(b=1; b<=5; b++)
//        if(b<=1)
//          printf("* ");
//        else
//        if(b==a)
//          printf("* ");
//        else
//        if(a==5)
//          printf("* ");
//        else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}


//        *
//
//      * *
//
//    *   *
//
//  *     *
//
//* * * * *
//
//
//int main()
//{
//    int a, b;
//    for(a=1; a<=5; a++)
//    {
//        for(b=1; b<=5; b++)
//        if(b >= 5)
//           printf("* ")   ;
//        else
//        if(b == 6-a)
//           printf("* ");
//        else
//        if(a == 5)
//           printf("* ");
//        else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//
//}


//* * * * * * * * *
//
//  *           *
//
//    *       *
//
//      *   *
//
//        *
//
//
//int main()
//{
//    int a, b;
//    for(a=1; a<=5; a++)
//    {
//        for(b=1; b<=9; b++)
//        if(b==a)
//           printf("* ");
//        else
//        if(b==10 - a)
//           printf("* ");
//        else
//        if(a==1)
//           printf("* ");
//        else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}


//        *
//
//      * * *
//
//    * * * * *
//
//  * * * * * * *
//
//* * * * * * * * *
//
//  * * * * * * *
//
//    * * * * *
//
//      * * *
//
//        *
//
//
//
//int main()
//{
//    int a, b;
//    for(a=1; a<=9; a++)
//    {
//        for(b=1; b<=9; b++)
//
//           if(a<=5)
//
//               if(b>=6-a && b<=4+a)
//                  printf("* ");
//               else printf("  ");
//
//
//           else
//
//               if(b>a-5 && b<10-(a-5))
//                  printf("* ");
//               else printf("  ");
//
//
//
//        printf("\n\n");
//    }
//    getch();
//}



//    * * * * *           * * * * *
//
//  * * * * * * *       * * * * * * *
//
//* * * * * * * * *   * * * * * * * * *
//
//* * * * * * M Y S i r G * * * * * * *
//
//  * * * * * * * * * * * * * * * * *
//
//    * * * * * * * * * * * * * * *
//
//      * * * * * * * * * * * * *
//
//        * * * * * * * * * * *
//
//          * * * * * * * * *
//
//            * * * * * * *
//
//              * * * * *
//
//                * * *
//
//                  *
//
//#include<stdio.h>
//#include<conio.h>
//
//int main()
//{
//    int i, j, a, b;
//    for(i=1; i<=4; i++)
//    {
//        for(j=1; j<=19; j++)
//            if(i<=3)
//               if(j>=4-i && j<=6+i)
//                  printf("* ");
//               else
//                if(j>=14-i && j<=16+i)
//                  printf("* ");
//               else printf("  ");
//            else
//               if(i==4 && j>=4-i && j<=6)
//                  printf("* ");
//               else
//                if(j==7)
//                  printf("M ");
//               else if(j==8)
//                printf("Y ");
//               else if(j==9)
//                printf("S ");
//               else if(j==10)
//                printf("i ");
//               else if(j==11)
//                printf("r ");
//               else if(j==12)
//                printf("G ");
//               else printf("* ");
//
//
//        printf("\n\n");
//    }
//
//
//    for(a=1; a<=9; a++)
//    {
//        for(b=1; b<=18; b++)
//            if(b>a && b<=19-a)
//               printf("* ");
//            else printf("  ");
//        printf("\n\n");
//    }
//    getch();
//}


















































