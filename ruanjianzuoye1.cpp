#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
FILE* fp;
char Operator()
{
    char op;
    int i;
    i = rand() % 4 + 1;
    switch (i)
    {
    case 1: return '+';
    case 2: return '-';
    case 3: return '*';
    case 4: return '/';
    }
}

void fraction(int num, int max, int bracket, int decimals)
{
    float a, b, c, d;
    int e;
    char op, x, y, z;
    if ((fp = fopen("D:\\4zeyunsuan.txt", "w")) == NULL)    //将表达式写入到文件
    {
        printf("不能打开文件！\n");
        exit(0);
    }
    if (bracket == 0 && decimals == 0)
    {
        for (int i = 0; i < num; i++)
        {
            a = rand() % 100 + 1;
            b = rand() % 100 + 1;
            c = rand() % 100 + 1;
            d = rand() % 100 + 1;
            for (int j = 0;; j++)
            {
                if (a <= max && b <= max && c <= max && d <= max)
                {
                    break;
                }
                else
                {
                    a = rand() % 100 + 1;
                    b = rand() % 100 + 1;
                    c = rand() % 100 + 1;
                    d = rand() % 100 + 1;
                }
            }
            op = Operator();
            x = op;
            op = Operator();
            y = op;
            op = Operator();
            z = op;
            printf("%.0f%c%.0f%c%.0f%c%.0f=\n", a, x, b, y, c, z, d);
            fprintf(fp, "%.0f%c%.0f%c%.0f%c%.0f=\n", a, x, b, y, c, z, d);
        }
        fclose(fp);
    }
    if (bracket == 0 && decimals == 1)
    {

        for (int i = 0; i < num; i++)
        {
            a = rand() / (double)(RAND_MAX / 10);
            b = rand() / (double)(RAND_MAX / 10);
            c = rand() / (double)(RAND_MAX / 10);
            d = rand() / (double)(RAND_MAX / 10);
            for (int j = 0;; j++)
            {
                if (a <= max && b <= max && c <= max && d <= max)
                {
                    break;
                }
                else
                {
                    a = rand() % 100 + 1;
                    b = rand() % 100 + 1;
                    c = rand() % 100 + 1;
                    d = rand() % 100 + 1;
                }
            }
            op = Operator();
            x = op;
            op = Operator();
            y = op;
            op = Operator();
            z = op;
            printf("%.1f%c%.1f%c%.1f%c%.1f=\n", a, x, b, y, c, z, d);
            fprintf(fp, "%.1f%c%.1f%c%.1f%c%.1f=\n", a, x, b, y, c, z, d);
        }
        fclose(fp);
    }
    if (bracket == 1 && decimals == 0)
    {
        for (int i = 0; i < num; i++)
        {
            a = rand() % 100 + 1;
            b = rand() % 100 + 1;
            c = rand() % 100 + 1;
            d = rand() % 100 + 1;
            e = rand() % 4;
            for (int j = 0;; j++)
            {

                if (a <= max && b <= max && c <= max && d <= max)
                {

                    break;
                }
                else
                {
                    a = rand() % 100 + 1;
                    b = rand() % 100 + 1;
                    c = rand() % 100 + 1;
                    d = rand() % 100 + 1;
                }
            }
            op = Operator();
            x = op;
            op = Operator();
            y = op;
            op = Operator();
            z = op;
            if (e == 0)
            {
                printf("(%.0f%c%.0f)%c(%.0f%c%.0f)=\n", a, x, b, y, c, z, d);
                fprintf(fp, "(%.0f%c%.0f)%c(%.0f%c%.0f)=\n", a, x, b, y, c, z, d);
            }
            if (e == 1)
            {
                printf("%.0f%c(%.0f%c%.0f)%c%.0f)=\n", a, x, b, y, c, z, d);
                fprintf(fp, "%.0f%c(%.0f%c%.0f)%c%.0f)=\n", a, x, b, y, c, z, d);
            }
            if (e == 2)
            {
                printf("(%.0f%c%.0f%c%.0f)%c%.0f)=\n", a, x, b, y, c, z, d);
                fprintf(fp, "(%.0f%c%.0f%c%.0f)%c%.0f)=\n", a, x, b, y, c, z, d);
            }
            if (e == 3)
            {
                printf("%.0f(%c(%.0f%c%.0f)%c%.0f))=\n", a, x, b, y, c, z, d);
                fprintf(fp, "%.0f%c((%.0f%c%.0f)%c%.0f))=\n", a, x, b, y, c, z, d);
            }
        }
        fclose(fp);
    }
    if (bracket == 1 && decimals == 1)
    {
        for (int i = 0; i < num; i++)
        {
            a = rand() / (double)(RAND_MAX / 10);
            b = rand() / (double)(RAND_MAX / 10);
            c = rand() / (double)(RAND_MAX / 10);
            d = rand() / (double)(RAND_MAX / 10);
            e = rand() % 3;
            for (int j = 0;; j++)
            {
                if (a <= max && b <= max && c <= max && d <= max)
                {
                    break;
                }
                else
                {
                    a = rand() % 100 + 1;
                    b = rand() % 100 + 1;
                    c = rand() % 100 + 1;
                    d = rand() % 100 + 1;
                }
            }

            op = Operator();
            x = op;
            op = Operator();
            y = op;
            op = Operator();
            z = op;
            if (e == 0)
            {
                printf("(%.1f%c%.1f)%c(%.1f%c%.1f)=\n", a, x, b, y, c, z, d);
                fprintf(fp, "(%.1f%c%.1f)%c(%.1f%c%.1f)=\n", a, x, b, y, c, z, d);
            }
            if (e == 1)
            {
                printf("%.1f%c(%.1f%c%.1f)%c%.1f)=\n", a, x, b, y, c, z, d);
                fprintf(fp, "%.1f%c(%.1f%c%.1f)%c%.1f)=\n", a, x, b, y, c, z, d);
            }
            if (e == 2)
            {
                printf("(%.1f%c%.1f%c%.1f)%c%.1f)=\n", a, x, b, y, c, z, d);
                fprintf(fp, "(%.1f%c%.1f%c%.1f)%c%.1f)=\n", a, x, b, y, c, z, d);
            }
            if (e == 3)
            {
                printf("%.1f(%c(%.1f%c%.1f)%c%.1f))=\n", a, x, b, y, c, z, d);
                fprintf(fp, "%.1f%c((%.1f%c%.1f)%c%.1f))=\n", a, x, b, y, c, z, d);
            }
        }
        fclose(fp);
    }
    system("pause");
}

int main()
{
    srand(time(0));
    int i, num, m, max, bracket, decimals;
    printf("请输入出题数目\n");
    scanf("%d", &num);
    printf("题目中数的最大值\n");
    scanf("%d", &max);
    printf("题目中是否需要出现括号？\n");
    printf("1.想要\n");
    printf("0.不想要\n");
    scanf("%d", &bracket);
    printf("题目中是否需要出现小数？\n");
    printf("1.想要\n");
    printf("0.不想要\n");
    scanf("%d", &decimals);
    fraction(num, max, bracket, decimals);

}