#include <stdio.h>
#include "head.h"

// 函数声明
void sort_score_num();       // 按学号排序
void sort_score_score();     // 按成绩排序
void swap(Node *a, Node *b); // 交换节点的辅助函数

void sort_score()
{
    int choice;
    printf("请选择排序方式：\n");
    printf("****************************************\n");
    printf("*****    请选择排序方式           ******\n");
    printf("*****    1:按学号排序            ******\n");
    printf("*****    2:按平均分排序           ******\n");
    printf("*****    3:返回菜单              ******\n");
    printf("****************************************\n");
    printf(">");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        sort_score_num(); // 按学号排序
        break;
    case 2:
        sort_score_score(); // 按总分排序
        break;
    case 3:
        printf("返回菜单\n");
        return;
    default:
        printf("输入错误，请重新输入\n");
        break;
    }
}

// 按学号排序
void sort_score_num()
{
    if (g_head == NULL || g_head->pNext == NULL)
    {
        printf("无需排序，链表为空或只有一个元素。\n");
        return;
    }

    Node *p, *q;
    for (p = g_head; p != NULL; p = p->pNext)
    {
        for (q = p->pNext; q != NULL; q = q->pNext)
        {
            // 按学号排序，交换节点
            if (p->stu.id > q->stu.id)
            {
                swap(p, q); // 调用交换函数
            }
        }
    }
    printf("按学号排序完成。\n");
    print_score();
}

// 按平均分排序
void sort_score_score()
{
    if (g_head == NULL || g_head->pNext == NULL)
    {
        printf("无需排序，链表为空或只有一个元素。\n");
        return;
    }

    Node *p, *q;
    for (p = g_head; p != NULL; p = p->pNext)
    {
        for (q = p->pNext; q != NULL; q = q->pNext)
        {
            // 按总分（平均成绩）排序，交换节点
            if (p->stu.avg < q->stu.avg)
            {
                swap(p, q); // 调用交换函数
            }
        }
    }
    printf("按总分排序完成。\n");
    print_score();
}

// 交换两个节点的函数
void swap(Node *a, Node *b)
{
    // 交换学生数据（而不是节点地址）
    Student_Score temp = a->stu;
    a->stu = b->stu;
    b->stu = temp;
}
