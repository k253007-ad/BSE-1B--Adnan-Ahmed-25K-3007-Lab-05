// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int pin, amount;
    char recipt[3];
    
    printf ("Enter Your PIN \n---------------\n");
    scanf("%d",&pin);
    printf("--------------------\n");
    
    if ((pin >= 1000 && pin <= 9999) || pin == 0000){
        if(pin == 1234){
            printf("Enter Amount to Withdraw\n-------------------------\n");
            scanf("%d",& amount);
            printf("---------------------\n");
            if (amount < 0){printf("Enter Valid Amount");}
            else if (amount < 500){printf("Enter Rs500 or More Amount");}
            else if( 500 <= amount && amount <= 50000){
                printf("Do you want a recipt\n--------------------\n");
                scanf("%s",&recipt);
                if ((recipt == "yes") || (recipt == "Yes") || (recipt == "YES") || (recipt== "y") || (recipt == "Y")){
                    printf("Your Withdrawl $%d", amount);
                } else {
                    printf("Transaction Successful");
                    printf("\n---------------------\nThank you for using our service");
                }
                printf(recipt);
            } else {printf("Daily limit Exceeded!\nPlease Enter Amount Within Daily Limit");}
        } else {printf("Wrong PIN\nEnter Again");}
    } else {
        printf("PIN is not valid");
        printf("\nEnter Again");
    }
    return 0;
}
