
#ifndef BK_SYSTEM
#define BK_SYSTEM

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

// Structure declaration
struct acc_type
{
     char bank_name[20];
     char bank_branch[20];
     char acc_holder_name[30];
     int acc_number;
     char acc_holder_address[100];
     float available_balance;
};
struct acc_type account[20];

/*
     printf("The above structure can be declared using
     typedef like below");

     typedef struct acc_type
     {
        char bank_name[20];
        char bank_branch[20];
        char acc_holder_name[30];
        int acc_number;
        char acc_holder_address[100];
        float available_balance;
     }Acc_detail;

     Acc_detail account[20];
*/

int num_acc;

void Create_new_account();
void Cash_Deposit();
void Cash_withdrawl();
void Account_information();
void Log_out();
void display_options();

#endif
