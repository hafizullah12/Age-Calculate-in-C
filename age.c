#include<stdio.h>
// #include<windows.h>
int main()
{
    int B_year,B_month,B_day,p_year,p_day,p_month,f_year,f_month,f_day;
    printf("\n\n\t\tWELCOME TO OUR SOFTWARE");
     printf("\n\n\t\tAge Calculator");
      printf("\n\n\n\n\t\t\t PRESS ENTER");


     getch();
    system("cls");
    printf("\nEnter Present-year & Present-month & Present-day:");
    scanf("%d %d %d",&p_year,&p_month,&p_day);
    printf("\n\n\n\n\t\t\t PRESS ENTER");
    getch();
    system("cls");

    printf("\nEnter Birth-year & Birth-month & Birth-day      :");
    scanf("%d %d %d",&B_year,&B_month,&B_day);
    printf("\n\n\n\t\t\tTo know your Age, PRESS ENTER");
    getch();
    system("cls");


    if(p_year>B_year && p_month>=B_month && p_day>=B_day)

        {
        f_year=p_year-B_year;
        printf("\n\n\t\t\tYour Age is\n\n\t\t\t%d years     ",f_year);

        f_month=p_month-B_month;
         printf("\n\n\t\t\t%d months    ",f_month);
        f_day=p_day-B_day;
            printf("\n\n\t\t\t%d days   ",f_day,f_year);
        }


    else if( p_day<B_day && p_month<B_month)
        {
    f_year=(p_year-1)-B_year;
    printf("\n\n\t\t\tYour Age is\n\n\t\t\t%d years   ",f_year);
    f_month=B_month-(p_month-1);
    printf("\n\n\t\t\t%d Months  ",f_month);
    f_day=(p_day+30)- B_day;
    printf("\n\n\t\t\t%d Days    ",f_day);



        }


    else if( p_day<B_day)
        {
            f_year=p_year-B_year;
            printf(" \n\n\t\t\tYour Age is\n\n\t\t\t%d Years   ",f_year);
            f_month=(p_month-1)-B_month;
            printf(" \n\n\t\t\t%d Months  ",f_month);
            f_day=(p_day+30)- B_day;
            printf(" \n\n\t\t\t%d Days    ",f_day);



        }

    else if( p_month<B_month)
        {
            f_year=(p_year-1)-B_year;
            printf(" \n\n\t\t\tYour Age is\n\n\t\t\t%d Years   ",f_year);
            f_month=(p_month+12)- B_month;
            printf(" \n\n\t\t\t%d Months  ",f_month);
            f_day=p_day-B_day;
            printf(" \n\n\t\t\t%d Days    ",f_day);


    }

    printf("\n\n\t\t");

    printf("\n\n\t\tThanks for using");
     getch();

}


