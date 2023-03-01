#include <stdio.h>
int main(int argc, char const *argv[])
{
        int year;
        printf("Enter year : ");
        scanf("%d",&year);
        if(year % 400 == 0) printf("Leap Year");
        else if(year % 100 == 0) printf("Not a leap Year");        
        else if(year % 4 == 0) printf("Leap Year");
        else printf("Not a leap Year");
        return 0;
}