#include <stdio.h>
int main(int argc, char const *argv[])
{
        int num;
        printf("Enter number : ");
        scanf("%d",&num);
        if((num^1)==(num+1))
        printf("Even");
        else
        printf("Odd");
        return 0;
}