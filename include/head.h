#ifndef HEAD_H
#define HEAD_H
#include<stdlib.h>
#include<string.h>
// 声明一个用于打印整数数组的函数
void print_arr(int arr[], int size); 

// 声明一个用于打印字符串的函数
void print_str(char *str);

// 声明一个名为home的函数，用途待补充
void home();

// 声明一个名为menu的函数，用途待补充
void menu();

// 定义一个结构体，用于存储学生的成绩信息
typedef struct Student_Score
{
    char name[20]; // 学生姓名
    int id;        // 学生ID
    double english;   // 英语成绩
    double math;      // 数学成绩
    double C_lang;    // C语言成绩
    double sport;        // 体育成绩
    double avg;       // 平均成绩
} Student_Score; //理解为取别名这个结构体就叫 Student_Score

typedef struct tagNode
{
    Student_Score stu;
    struct tagNode *pNext;

} Node; //和上面同理

extern Node *g_head; // 全局变量，用于存储链表头节点的指针

// 声明一个用于添加学生成绩信息的函数
void add_score();

// 声明一个用于打印学生成绩信息的函数
void print_score();

// 声明一个用于搜索学生成绩信息的函数
void search_score();

// 声明一个用于修改学生成绩信息的函数
void modify_score();

// 声明一个用于删除学生成绩信息的函数
void delete_score();

// 声明一个用于排序学生成绩信息的函数
void sort_score();

// 声明一个用于退出系统的函数
void exit_system();

#endif