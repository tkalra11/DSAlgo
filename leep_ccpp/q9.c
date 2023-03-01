#include <stdio.h>
int main(int argc, char const *argv[])
{
        int sum=0,i;
        for(i=0;i<10;++i){
                int n;
                printf("Enter a number : ");
                scanf("%d",&n);
                sum+=n;
        }
        printf("Sum : %d",sum);
        printf("Average : %f",(sum/10.0));
        return 0;
}