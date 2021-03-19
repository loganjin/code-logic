//逆序问题中个位十位0的问题可以转换成加法解决

#include<stdio.h>

int main(void)
{
    int number;
    scanf("%d",&number);
    
    int a,b,c;
    
    a=number%10;
    number/=10;
    b=number%10;
    number/=10;
    c=number%10;
    printf("%d",a*100+b*10+c);//解决了0的问题
    
    return 0;
}
