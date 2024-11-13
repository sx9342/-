// #include <stdio.h>
// #include "head.h"
// void search_score_name();
// void search_score_id();
// void search_score()
// {
    
//     printf("****************************************\n");
//     printf("*****    请选择查找方式            ******\n");
//     printf("*****    1:按姓名查找             ******\n");
//     printf("*****    2:按学号查找             ******\n");
//     printf("*****    3:返回菜单               ******\n");
//     printf("****************************************\n");
//     do{
//     int choice;
//     scanf("%d", &choice);
//     switch(choice)
//     {
//         case 1:
//         search_score_name();
//         break;
//         case 2:
//         search_score_id();
//         break;
//         default:
//         printf("输入错误，请重新输入\n");
//         search_score();
//     }

//     } while (getchar() == '3');
// }

// void search_score_name()
// {
//     char continue_input;
//     int res_num = 0; // 初始化为0

//     printf("请输入要查找的姓名：");
//     char name[20];
//     scanf("%s", name);

//     Node *p = g_head;
//     Node *results[100]; // 假设最多找到100个结果
//     int result_count = 0;

//     while(p != NULL)
//     {
//         if(strcmp(p->stu.name, name) == 0) // 计数，找到学生数量
//         {
//             res_num++;
//             results[result_count++] = p; // 保存匹配的节点
//         }
//         p = p->pNext;
//     }

//     if (res_num == 0)
//     {
//         printf("找到%d个结果\n", res_num);
//         return;
//     }

//     printf("找到%d个结果\n", res_num);
//     printf("**************************************************************************************************\n");
//     printf("*\t姓名\t*\t学号\t*\t英语\t*\t数学\t*\tC语言\t*\t体育\t*\n");
//     printf("**************************************************************************************************\n");

//     for (int i = 0; i < result_count; i++)
//     {
//         printf("*\t%s\t*\t%d\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\n",
//                results[i]->stu.name,
//                results[i]->stu.id,
//                results[i]->stu.english,
//                results[i]->stu.math,
//                results[i]->stu.C_lang,
//                results[i]->stu.sport);
//     }

//     printf("**************************************************************************************************\n");
// }

// void search_score_id()
// {
//     char continue_input;
//     int res_num;
// }
#include <stdio.h>
#include "head.h"

void search_score_name();
void search_score_id();

void search_score()
{


    int choice;
    do
    {
        printf("****************************************\n");
        printf("*****    请选择查找方式           ******\n");
        printf("*****    1:按姓名查找             ******\n");
        printf("*****    2:按学号查找             ******\n");
        printf("*****    3:返回菜单               ******\n");
        printf("****************************************\n");
        printf(">");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                search_score_name();
                break;
            case 2:
                search_score_id();
                break;
            case 3:
                printf("返回菜单\n");
                return;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    } while (1);
}

void search_score_name()
{
    int res_num = 0; // 初始化为0

    printf("请输入要查找的姓名：");
    char name[20];
    scanf("%s", name);

    Node *p = g_head;
    Node *results[100]; // 假设最多找到100个结果
    int result_count = 0;

    while (p != NULL)
    {
        if (strcmp(p->stu.name, name) == 0) // 计数，找到学生数量
        {
            res_num++;
            results[result_count++] = p; // 保存匹配的节点
        }
        p = p->pNext;
    }

    if (res_num == 0)
    {
        printf("找到%d个结果\n", res_num);
        return;
    }

    printf("找到%d个结果\n", res_num);
    printf("**************************************************************************************************\n");
    printf("*\t姓名\t*\t学号\t*\t英语\t*\t数学\t*\tC语言\t*\t体育\t*\n");
    printf("**************************************************************************************************\n");

    for (int i = 0; i < result_count; i++)
    {
        printf("*\t%s\t*\t%d\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\n",
               results[i]->stu.name,
               results[i]->stu.id,
               results[i]->stu.english,
               results[i]->stu.math,
               results[i]->stu.C_lang,
               results[i]->stu.sport);
    }

    printf("**************************************************************************************************\n");
}

void search_score_id()
{
    int res_num = 0; // 初始化为0

    printf("请输入要查找的学号：");
    int id;
    scanf("%d", &id);

    Node *p = g_head;
    Node *results[100]; // 假设最多找到100个结果
    int result_count = 0;

    while (p != NULL)
    {
        if (p->stu.id == id) // 计数，找到学生数量
        {
            res_num++;
            results[result_count++] = p; // 保存匹配的节点
        }
        p = p->pNext;
    }

    if (res_num == 0)
    {
        printf("找到%d个结果\n", res_num);
        return;
    }

    printf("找到%d个结果\n", res_num);
    printf("**************************************************************************************************\n");
    printf("*\t姓名\t*\t学号\t*\t英语\t*\t数学\t*\tC语言\t*\t体育\t*\n");
    printf("**************************************************************************************************\n");

    for (int i = 0; i < result_count; i++)
    {
        printf("*\t%s\t*\t%d\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\n",
               results[i]->stu.name,
               results[i]->stu.id,
               results[i]->stu.english,
               results[i]->stu.math,
               results[i]->stu.C_lang,
               results[i]->stu.sport);
    }

    printf("**************************************************************************************************\n");
}