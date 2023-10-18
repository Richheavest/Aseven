#include<stdio.h>
int main()
{
    int m, n;
    scanf_s("%d%d", &m, &n);
    for (m; m <= n; m++)
    {
        if (m % 2 == 0 && m % 3 == 0)       //第一个
        {
            printf("%d,2x%d,3x%d\n", m, m / 2, m / 3);
            continue;                //若m满足第一个条件，想要不往下运行，并且要重新进入循环，可以用continue
        }
        if (m % 2 == 0)                   //  第二个                   
            printf("%d,2x%d\n", m, m / 2);
        if (m % 3 == 0)                    // 第三个
            printf("%d,3x%d\n", m, m / 3);
       
        if (m % 2 != 0 && m % 3 != 0)
            printf("%d,-\n", m);
    }
    return 0;
}