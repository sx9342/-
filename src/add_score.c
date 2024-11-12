#include <stdio.h>

#include "head.h"

Node *g_head = NULL;

void add_score()
{
    // 创建一个新节点，并为其分配内存
    Node *pNewNode = (Node *)malloc(sizeof(Node));
    if (pNewNode == NULL)
    {
        printf("内存分配失败！\n");
        return;
    }

    // 初始化新节点的pNext指针为NULL，表示它当前没有指向任何节点
    pNewNode->pNext = NULL;

    // 判断链表是否为空
    if (g_head == NULL)
    {
        // 如果链表为空，则将新节点作为头节点
        g_head = pNewNode;
    }
    else
    {
        // 如果链表不为空，遍历到链表的最后一个节点
        Node *p = g_head;
        while (p->pNext != NULL)
        {
            p = p->pNext;
        }
        // 将新节点插入到最后一个节点的pNext中
        p->pNext = pNewNode;
    }

    // 输入学生信息
    printf("请输入学生姓名：\n");
    scanf("%s", pNewNode->stu.name); // 输入学生姓名

    printf("请输入学生学号：\n");
    scanf("%d", &pNewNode->stu.id); // 输入学生学号

    printf("请输入学生成绩(英语，数学，C语言，体育)：\n");
    scanf("%lf%lf%lf%lf", &pNewNode->stu.english, &pNewNode->stu.math, &pNewNode->stu.C_lang, &pNewNode->stu.sport); // 输入学生成绩

    printf("学生信息录入成功\n");
}
