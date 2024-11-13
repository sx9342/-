#include <stdio.h>
#include "head.h"

void print_score()
{
    Node *p = g_head;
    if (p == NULL)
    {
        printf("无记录\n");
    }
    else
    {
        printf("**************************************************************************************************\n");
        printf("*\t姓名\t*\t学号\t*\t英语\t*\t数学\t*\tC语言\t*\t体育\t*\n");
        printf("**************************************************************************************************\n");
        while (p != NULL)
        {
            printf("*\t%s\t*\t%d\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\n",
                   p->stu.name,
                   p->stu.id,
                   p->stu.english,
                   p->stu.math,
                   p->stu.C_lang,
                   p->stu.sport);
            p = p->pNext;
            printf("**************************************************************************************************\n");
        }
    }
}
