//如何求一个数中某个数字出现的次数
//如何判断一个数为完全平方数

#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
  
    for ( i=n1; i<=n2; i++ ) 
    {
        if ( IsTheNumber(i) )
            cnt++;
    }
  
    printf("cnt = %d\n", cnt);

    return 0;
}

int IsTheNumber ( const int N )
{
    if(N<0)
    {
        return 0;
    }

    int m=(int)sqrt(N);//sqrt()：求一个数的开方数。
    
    int n=N;
    int temp[10]={0};
    int i;

    
    if(m*m==n)
    {
        while(n>0)
        {
            i=n%10;// %10:两整数相除的余数部分。eg:144%10=4。
            temp[i]+=1;
            n/=10;// /10:两整数相除的整数部分。eg:144/10=14。
            
            if(temp[i]==2)
            {
                return 1;
            }
        }
        return 0;//没有这行代码有的数（是完全平方数但数中不是俩个数字相等）会导致程序不能完成。
    }
    else
    {
        return 0;
    }
}
