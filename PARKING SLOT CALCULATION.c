#include <stdio.h>
#include <conio.h>
#include <math.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    int choice;
    float total_bill;
    printf("########################################################################################################################\n");
    printf("                             \t\t\tWELCOME\n");
    printf("************************************************************************************************************************\n");
    printf("                        \t\tPARKING CHARGES CHART\n");
    printf("          \t\t(NOTE: These rates are approved by INDIAN RAILWAYS)\n");
    printf("              \t\tTIME SLAB                       2 wheeler              4 wheeler\n");
    printf("                                           \t\t(per hour)             (per hour)\n");
    printf("              \t\t<=4 hours                       Rs.6                   Rs.10\n");
    printf("              \t\t<=8 hours                       Rs.9                   Rs.15\n");
    printf("              \t\t<=12 hours                      Rs.12                  Rs.20\n");
    printf("              \t\t<=24 hours                      Rs.15                  Rs.25\n");
    printf("              \t\t>24 hours                       Rs.20                  Rs.30\n");
    printf("               \t\tGST                             Rs.5                   Rs.10\n");
    printf("           \t\t(NOTE: GST is Applicable only after 12 hours)\n");
    printf("########################################################################################################################\n");
    for(int i=1;i<=100000000;i++)
    {
    struct time start, stop, diff;
    printf("Enter hours, minutes and seconds of start time: ");
    scanf("%d%d%d", &start.hours,&start.minutes, &start.seconds);
    printf("Enter hours, minutes and seconds of stop time: ");
    scanf("%d%d%d", &stop.hours,&stop.minutes, &stop.seconds);
    if(start.seconds > stop.seconds)
    {
        stop.seconds += 60;
        --stop.minutes;
    }
    if(start.minutes > stop.minutes)
    {
        stop.minutes += 60;
        --stop.hours;
    }
    diff.hours = stop.hours - start.hours;
    printf("enter your vehicle type\n");
    printf("1.two wheeler\n");
    printf("2.four wheeeler\n");
    printf("your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
    if (diff.hours <= 4)
    total_bill = diff.hours*6;
    else if (diff.hours<=8)
    total_bill = diff.hours*9;
    else if (diff.hours <= 12)
    total_bill = diff.hours*12;
    else if (diff.hours <= 24)
    total_bill = diff.hours*15+(diff.hours-12)*5;
    else
    total_bill = diff.hours*20+(diff.hours-12)*5;
    printf("Bill to be paid Rs.%f\n\n",total_bill);
    sleep(2);
    break;
    getch();}
    case 2:{
    if (diff.hours<= 4)
    total_bill = diff.hours*10;
    else if (diff.hours<=8)
    total_bill = diff.hours*15;
    else if (diff.hours <= 12)
    total_bill = diff.hours*20;
    else if (diff.hours<= 24)
    total_bill = diff.hours*25+(diff.hours-12)*5;
    else
    total_bill = diff.hours*30+(diff.hours-12)*5;
    printf("Bill to be paid Rs.%f\n\n",total_bill);
    sleep(2);
    break;
    getch();
    }}}}
