#ifndef HEAD_H
#define HEAD_H

void print_arr(int arr[], int size); //编写一个能快速打印数组的程序
void print_str(char *str);//打印字符串
void home();
void menu();
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

void add_score();
void print_score();
void search_score();
void modify_score();
void delete_score();
void sort_score();
void exit_system();
#endif