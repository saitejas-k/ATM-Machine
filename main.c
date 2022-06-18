void mainMenu(){
    
    printf("***hello*****\n");
    printf("****WELCOME TO MSD ATM***\n\n");
    printf("****please choose one of the options below**\n\n");
    printf("<1> Check amount balance\n");
    printf("<2> Deposit money\n");
    printf("<3> Withdraw money\n");
    printf("<4> Exit\n\n");
}
void checkbalance(float balance){
    printf("you chose to See your Account Balance\n");
    printf("\n\n your Available Balance is:%.2f\n\n",balance);
}
float moneyDeposit(float balance){
    float deposit;
    printf("You chose to deposit money\n");
    printf("Your Balance is:%.2f\n\n",balance);
    printf("enter the amount to Deposit\n");
    scanf("%f",&deposit);
    balance += deposit;
    printf("\nYour New Account Balance is:%.2f\n\n",balance);
    return balance;}
float moneyWithdraw(float balance){
    floatwithdraw;
    bool back=true;
    printf("You chose to Withdraw money\n");
    printf("Your Balance is:%.2f\n\n",balance);
    while (back) {
    printf("Enter the amount to withdraw:\n");
    scanf("%f",&withdraw);
    
    if(withdraw < balance) {
        back=false;
        balance-=withdraw;
        printf("\nYour withdrawing money is:%.2f\n",withdraw);
        printf("Your New Balance is:%.2f\n\n",balance);
    }
    
        else {
            
        printf("You don't have enough money\n");
        printf("Please contact your Bank Customer Services\n");
        printf("Your Balance is:%.2f\n\n",balance);
        
    }
    }
    return balance:}
    void menuExit() {
        printf("--------------Please Take your reciept------------------\n");
        printf("----Thank you for using MSD ATM-----\n");
    }
    }
}
    int main() {
    int option;
    float balance=2000000.00;
    int choose;
    bool again=true;
    
    while (again) {
        mainMenu();
        printf("**********\n");
        printf("Your Selection:\t");
        scanf("%d",&option);
        switch(option) {
            case 1:
            checkBalance(balance);
            break;
            case 2:
            balance = moneyDeposit(balance);
            break;
            case 3:
            balance = moneyWithdraw(balance);
            break;
            case 4:
            menuExit();
            return 0;
            default:
            errorMessages();
            break;
            }
            
            printf("***********\n");
            printf("Would you like to do another transcation:\n");
            printf("<1> Yes\n");
            printf("<2> No\n");
            scanf("%d",choose);
            
            if(choose ==2) {
                again = false;
                menuExit();}
    }return 0;
    }
            }
            
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

int main() {
    int option;
    float balance=2000000.00;
    int choose;
    bool again= true;
    
    while(again) {
    mainMenu();
    printf("*************\n");
    printf("Your Selection:\t");
    scanf("%d",&option);
    switch(option) {
        case 1:
        checkBalance(balance);
        break;
        case 2:
        balance = moneyDeposit(balance);
        break;
        case 3:
        balance = moneyWithdraw(balance);
        break;
        case 4:
        menuExit();
        return 0;
        default:
        errorMessage();
        break;
    }
    
    printf("********\n");
     printf("Would you like to do another transcation:\n");
            printf("<1> Yes\n");
            printf("<2> No\n");
            scanf("%d",choose);
             if(choose ==2) {
                again = false;
                menuExit();}
    }return 0;
    }
    }
