//Auto Rickshaw1
#include<stdio.h>
void main()
{
    int Time,Day,Night;
    float Fair, WT, TotalFare;
    Day=1;
    Night=0;
    printf("DAY = 1 & NIGHT = 0 \nTime: ");
    scanf("%d",&Time);
    if(Time==1)
    {
    printf("Enter Distance: ");
    scanf("%f",&Fair);
    printf("Enter Waiting Time: ");
    scanf("%f",&WT);
    Fair=(Fair-1.5)/0.1;
    TotalFare=Fair+WT+23;
    printf("Total Fare is %f",TotalFare);
    }
    else if(Time==0)
    {
    printf("Enter Distance: ");
    scanf("%f",&Fair);
    printf("Enter Waiting Time: ");
    scanf("%f",&WT);
    WT=2*WT;
    Fair=(Fair-1.5)/0.1;
    Fair*=2;
    TotalFare=Fair+WT+29;
    printf("Total Fare is %f",TotalFare);
    }
    else
    {
        printf("Invalid Input");
    }
}
