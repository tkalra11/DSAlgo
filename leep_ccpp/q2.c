#include <stdio.h>
int main(int argc, char const *argv[])
{
        int i,sum=0;
        for(i=100;i<200;++i){
                if(i%5==0)
                sum+=i;
        }
        printf("The sum is : %d",sum);
        return 0;
}
