#include<stdio.h>
int main()
{
    int a,n;
    char opinion;
    int total,grand_total=0,gt;
    int price1=0,price2=0,price3=0,price4=0,price5=0,price6=0,price7=0,price8=0,price9=0,price10=0;
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0;
    int final_amount;
    int sum_1=0,sum_2=0,sum_3=0,sum_4=0,sum_5=0,sum_6=0,sum_7=0,sum_8=0,sum_9=0,sum_10=0;
    printf("MYSORE CHAI POINT\n");
    printf("1.coffee - Rs.15\n" "2.Tea - Rs.15\n" "3.Milk - 10\n" "4.Badam Milk - 15\n" "5.Butter milk - Rs.15\n" "6.Milkshake - Rs.25\n" "7.Apple juice - Rs.20\n" "8.Orange juice- Rs20\n" "9.Pomegranate juice - Rs.30\n" "10.Pineapple juice - Rs.25\n");
    printf("************************************************\n");

   do
   {
     printf("Enter your choice\n");
     scanf("%d",&a);
     switch(a){
     case 1:
         printf("How many cups");
         scanf("%d",&n);
         price1 = 15;
         sum1=n*price1;
         sum_1 +=sum1;
         printf("Total amount %d\n",sum1);
         break;
     case 2:
         printf("How many cups");
         scanf("%d",&n);
         price2 = 15;
         sum2=n*price2;
         sum_2 +=sum2;
         printf("Total amount %d\n",sum2);
         break;
    case 3:
         printf("How many cups");
         scanf("%d",&n);
         price3 = 10;
         sum3=n*price3;
         sum_3 +=sum3;
         printf("Total amount %d\n",sum3);
         break;
     case 4:
         printf("How many cups");
         scanf("%d",&n);
         price4 = 15;
         sum4=n*price4;
         sum_4 = sum_1+sum4;
         printf("Total amount %d\n",sum4);
         break;
     case 5:
         printf("How many cups");
         scanf("%d",&n);
         price5 = 15;
         sum5=n*price5;
         sum_5 +=sum5;
         printf("Total amount %d\n",sum5);
         break;
     case 6:
         printf("How many cups");
         scanf("%d",&n);
         price6 = 25;
         sum6=n*price6;
         sum_6 +=sum6;
         printf("Total amount %d\n",sum6);
         break;
     case 7:
         printf("How many cups");
         scanf("%d",&n);
         price7 = 20;
         sum7=n*price7;
         sum_7 +=sum7;
         printf("Total amount %d\n",sum7);
         break;
     case 8:
         printf("How many cups");
         scanf("%d",&n);
         price8 = 20;
         sum8=n*price8;
         sum_8 +=sum8;
         printf("Total amount %d\n",sum8);
         break;
     case 9:
         printf("How many cups");
         scanf("%d",&n);
         price9 = 30;
         sum9=n*price9;
         sum_9 +=sum9;
         printf("Total amount %d\n",sum9);
         break;
     case 10:
         printf("How many cups");
         scanf("%d",&n);
         price10 = 25;
         sum10=n*price10;
         sum_10 +=sum10;
         printf("Total amount %d\n",sum10);
         break;
     default:
        printf("Sorry it is not available\n");
     }
     printf("Do you order more : 1(Yes) or 0(No):");
     scanf("%d",&opinion);
   }
   while(opinion == 1);

    printf("|----------------------------------------\n");
    printf("|Tea                      |       %d  \n",sum_1);
    printf("|Coffee                   |       %d  \n",sum_2);
    printf("|Milk                     |       %d  \n",sum_3);
    printf("|Badam milk               |       %d  \n",sum_4);
    printf("|Butter milk              |       %d  \n",sum_5);
    printf("|Milkshake                |       %d  \n",sum_6);
    printf("|Apple juice              |       %d  \n",sum_7);
    printf("|Orange juice             |       %d  \n",sum_8);
    printf("|Pomegranate juice        |       %d  \n",sum_9);
    printf("|Pine apple               |       %d  \n",sum_10);
    printf("------------------------------------------------\n");

    grand_total=sum_1+sum_2+sum_3+sum_4+sum_5+sum_6+sum_7+sum_8+sum_9+sum_10;
    printf("GRAND TOTAL =                 %d\n",grand_total);
    printf("*************************************************\n");
     printf("Amount to be paid = %d\n",grand_total);
     printf("Thank You!!!");
}
