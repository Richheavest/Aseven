#include<stdio.h>
int main()
{
    int m, n;
    scanf_s("%d%d", &m, &n);
    for (m; m <= n; m++)
    {
        if (m % 2 == 0 && m % 3 == 0)       //��һ��
        {
            printf("%d,2x%d,3x%d\n", m, m / 2, m / 3);
            continue;                //��m�����һ����������Ҫ���������У�����Ҫ���½���ѭ����������continue
        }
        if (m % 2 == 0)                   //  �ڶ���                   
            printf("%d,2x%d\n", m, m / 2);
        if (m % 3 == 0)                    // ������
            printf("%d,3x%d\n", m, m / 3);
       
        if (m % 2 != 0 && m % 3 != 0)
            printf("%d,-\n", m);
    }
    return 0;
}