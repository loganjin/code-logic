//count variable:cnt

#include<stdio.h>

int main(void)
{
    int A;//A does not exceed 6
    scanf("%d", &A);

    int cnt = 1;//count variable

    int i, j, k;

    for (i = A; i <= A + 3;i++)
    {
        for (j = A; j <= A + 3;j++)
        {
            for (k = A; k <= A + 3;k++)
            {
                printf("%d%d%d", i, j, k);
                cnt++;
              
                if(cnt>6)
                {
                    printf("\n");
                    cnt = 1;
                }
                else
                {
                    printf(" ");
                }
            }
        }
    }

    return 0;
}
