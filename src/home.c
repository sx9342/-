#include<stdio.h>
#include "head.h"
void home()
{
    
    while(1)
    {
        int choice;
        menu();
        printf("请输入你的选择：");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            add_score();
            printf("\n");
            
            break;
        case 2:
            print_score();
            printf("\n");
            
            break;
        case 3:
            search_score();
            break;
       case 4:
            modify_score();
            break;
      /*  case 5:
            delete_score();
            break;
        case 6:
            sort_score();
            break; */
        case 0:
            exit_system();
            break;

        default:
            printf("输入错误，请重新输入\n");
            break;
        }
        if (choice==0)
        {
            break;
            exit(0);
        }
    }
    
}