//求中位数实质上是排序
//此解法存在问题，等系统学完排序算法后完善

#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

ElementType Median( ElementType A[], int N )
{
    ElementType temp;
    int i,j;
    
    //排序算法
    for(i=N-1;i>0;i--)
    {
        for(j=0;j<N-1;j++)
        {
            if(A[i]<A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    
    if(N%2==0)
    {
        temp=(A[N/2-1]+A[N/2])/2;//为偶数时
    }
    else
    {
        temp=A[N/2];//为奇数时
    }
    
    
    
    return temp;
}
