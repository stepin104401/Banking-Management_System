#include "banks.h"

int main()
{
    char option;
    num_acc=0;
    while(1)
    {
       printf("\n***** Welcome to Bank Application *****\n");
       display_options();
       printf("Please enter any options (1/2/3/4/5/6) ");
       printf("to continue : ");

        option = getch();
        printf("%c \n", option);
        switch(option)
        {
          case '1': Create_new_account();
                    break;
          case '2': Cash_Deposit();
                    break;
          case '3': Cash_withdrawl();
                    break;
          case '4': Account_information();
                    break;
          case '5': return 0;
          case '6': system("cls");
                    break;
          default : system("cls");
                    printf("Please enter one of the options");
                    printf("(1/2/3/4/5/6) to continue \n ");
                    break;
        }
    }
    return 0;
}

