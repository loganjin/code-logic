//i、j的相对顺序
//左右对齐的概念

#include<stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    
    int i;
    int j;
  
    for(j=1;j<=N;j++)
    {
        for(i=1;i<=j;i++)//必须到j
        {
            printf("%d*%d=%-4d",i,j,i*j);//i、j的顺序很重要
        }
        printf("\n");//内层循环外进行换行
    }
    
    return 0;
}
