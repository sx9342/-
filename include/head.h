#ifndef HEAD_H
#define HEAD_H

void print_arr(int arr[], int size); //编写一个能快速打印数组的程序
void print_str(char *str);//打印字符串
void home(); //主页
void menu(); //菜单
typedef struct Student_Score
{
    char name[20];
    int id;
    int english;
    int math;
    int C_lang;
    int PE;
    int avg;
};


#endif