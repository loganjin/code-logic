//symbol mark

#include<stdio.h>

int main(void)
{
    int n;
    int i;
    int sum = 0;

    int sign = 1;//symbol mark

    scanf("%d", &n);

    for (i = 1; i <= n;i++)
    {
        sum += i*sign;
        sign = -sign;
    }

    printf("sum=%d\n", sum);

    return 0;
}
