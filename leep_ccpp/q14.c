#include <stdio.h>
int main(int argc, char const *argv[])
{
        int i=1;
        for(int j=0;j<4;++j){
                for(int k=0;k < 3-j;++k)
                printf("   ");
                for(int k=0;k<=j;++k)
                printf("%d    ",i++);
                printf("\n");
        }
        return 0;
}