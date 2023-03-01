#include <stdio.h>
int main(int argc, char const *argv[])
{
        int a,b,c;
        printf("Enter a,b,c :");
        scanf("%d%d%d",&a,&b,&c);
        printf("Largest is : %d",a>b?(a>c?a:c):(b>c?b:c));       
        return 0;
}