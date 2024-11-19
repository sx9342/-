// #include <stdio.h>
// #include <string.h> // 需要包含字符串处理函数的头文件
// #include "head.h"

// void modify_score()
// {
//     char name[20];
//     int id;
//     printf("请进行姓名学号进行双重认证：\n");
//     scanf("%s", name);
//     getchar(); // 清除缓冲区中的换行符
//     scanf("%d", &id);
//     getchar(); // 清除缓冲区中的换行符

//     Node *p = g_head;
    
//     while (p != NULL)
//     {
//         if (p->stu.id == id && strcmp(p->stu.name, name) == 0)
//         {
//             printf("原成绩:\n");
//             printf("**************************************************************************************************\n");
//             printf("*\t姓名\t*\t学号\t*\t英语\t*\t数学\t*\tC语言\t*\t体育\t*\n");
//             printf("**************************************************************************************************\n");
//             printf("*\t%s\t*\t%d\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\n",
//                    p->stu.name,
//                    p->stu.id,
//                    p->stu.english,
//                    p->stu.math,
//                    p->stu.C_lang,
//                    p->stu.sport);

//             printf("请输入修改后的成绩：\n");
//             printf("英语成绩: ");
//             scanf("%f", &p->stu.english);
//             getchar(); // 清除缓冲区中的换行符
//             printf("数学成绩: ");
//             scanf("%f", &p->stu.math);
//             getchar(); // 清除缓冲区中的换行符
//             printf("C语言成绩: ");
//             scanf("%f", &p->stu.C_lang);
//             getchar(); // 清除缓冲区中的换行符
//             printf("体育成绩: ");
//             scanf("%f", &p->stu.sport);
//             getchar(); // 清除缓冲区中的换行符

//             printf("成绩修改成功！\n");
//             printf("**************************************************************************************************\n");
//             printf("*\t姓名\t*\t学号\t*\t英语\t*\t数学\t*\tC语言\t*\t体育\t*\n");
//             printf("**************************************************************************************************\n");
//             printf("*\t%s\t*\t%d\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\n",
//                    p->stu.name,
//                    p->stu.id,
//                    p->stu.english,
//                    p->stu.math,
//                    p->stu.C_lang,
//                    p->stu.sport);
//             return;
//         }
//         p = p->pNext; // 移动到下一个节点
//     }

//     printf("认证失败！未找到匹配的学生记录。\n");
    
// }
#include <stdio.h>
#include <string.h> // 需要包含字符串处理函数的头文件
#include "head.h"

void modify_score()
{
    char name[20];
    int id;
    printf("请进行姓名学号进行双重认证：\n");
    scanf("%s", name);
    getchar(); // 清除缓冲区中的换行符
    scanf("%d", &id);
    getchar(); // 清除缓冲区中的换行符

    Node *p = g_head;

    while (p != NULL)
    {
        if (p->stu.id == id && strcmp(p->stu.name, name) == 0)
        {
            // 输出原成绩
            printf("原成绩:\n");
            printf("*****************************************************************************************************************\n");
            printf("*\t姓名\t*\t学号\t*\t英语\t*\t数学\t*\tC语言\t*\t体育\t*\t平均分\t*\n");
            printf("*****************************************************************************************************************\n");
            printf("*\t%s\t*\t%d\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\n",
                   p->stu.name,
                   p->stu.id,
                   p->stu.english,
                   p->stu.math,
                   p->stu.C_lang,
                   p->stu.sport,
                   p->stu.avg);

            // 输入新的成绩
            printf("请输入修改后的成绩：\n");
            printf("英语成绩: ");
            scanf("%lf", &p->stu.english);
            getchar(); // 清除缓冲区中的换行符
            printf("数学成绩: ");
            scanf("%lf", &p->stu.math);
            getchar(); // 清除缓冲区中的换行符
            printf("C语言成绩: ");
            scanf("%lf", &p->stu.C_lang);
            getchar(); // 清除缓冲区中的换行符
            printf("体育成绩: ");
            scanf("%lf", &p->stu.sport);
            getchar(); // 清除缓冲区中的换行符

            // 计算并更新平均成绩
            p->stu.avg = (p->stu.english + p->stu.math + p->stu.C_lang + p->stu.sport) / 4.0;

            // 输出修改后的成绩
            printf("成绩修改成功！\n");
            printf("*****************************************************************************************************************\n");
            printf("*\t姓名\t*\t学号\t*\t英语\t*\t数学\t*\tC语言\t*\t体育\t*\t平均分\t*\n");
            printf("*****************************************************************************************************************\n");
            printf("*\t%s\t*\t%d\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\t%.1f\t*\n",
                   p->stu.name,
                   p->stu.id,
                   p->stu.english,
                   p->stu.math,
                   p->stu.C_lang,
                   p->stu.sport,
                   p->stu.avg);
            return;
        }
        p = p->pNext; // 移动到下一个节点
    }

    printf("认证失败！未找到匹配的学生记录。\n");
}
