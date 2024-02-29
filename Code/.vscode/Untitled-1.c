#include <stdio.h>

int isPrime(int n)
{
    if (n <= 3)
    {
        return 0; // 表示假
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0; // 表示假
        }
    }
    return 1; // 表示真
}

int main()
{
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d 是素数\n", num);
    }
    else
    {
        printf("%d 不是素数\n", num);
    }
    return 0;
}
