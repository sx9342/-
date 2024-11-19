#include<stdio.h>
#include "head.h"

void delete_score()
{
    print_score();
    printf("请输入姓名和学号进行双重认证");
    
    char name[20];
    int id;
    printf("请输入要删除的学生姓名：\n");
    scanf("%s", name);
    printf("请输入要删除的学生学号：\n");
    scanf("%d", &id);

    Node *p = g_head;
    Node *prev = NULL;

    while (p != NULL)
    {
        if (p->stu.id == id && strcmp(p->stu.name, name) == 0)
        {
            if (prev == NULL) // 如果是头节点
            {
                g_head = p->pNext;
            }
            else
            {
                prev->pNext = p->pNext;
            }
            free(p); // 释放节点内存
            printf("学生成绩删除成功！\n");
            return;
        }
        prev = p;
        p = p->pNext;
    }

    printf("未找到匹配的学生记录！\n");
}
