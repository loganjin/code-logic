//i、j间的相对关系

#include<stdio.h>

int main(void)
{
    int i,j;
    
    for(j=0;j<4;j++)
    {
        for(i=0;i<j;i++)//每行前的空格数：0，1，2，3
        {
            printf(" ");
        }
        for(i=3-j;i>0;i--)//每行*+空格数：3、2、1、0
        {
            printf("* ");
        }
        printf("*");//末尾的*没有空格
        printf("\n");
    }
    
    return 0;
}
