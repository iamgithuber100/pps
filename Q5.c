#include <stdio.h>

int dayofweek(int d, int m, int y)
{
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}
int main()
{
    int d,m,y,day;
    printf("Enter date(dd mm yyyy):");
    scanf("%d %d %d",&d,&m,&y);
    day = dayofweek(d,m,y);
    switch(day)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    }
    return 0;
}