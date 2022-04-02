#include"../inc/header.h"
/**
 * @brief Withdraws amount from user's account.
 * 
 */
user withdrawmoney(info *acc,float withdrawalAmount,info *temp,int *see)
{
    int i=searchaccount (acc,i,temp,see);
    if(i==-1)
    {
        return SUCCESS;
    }
    else
    {
        /**
         * @brief Subtracts required amount from existing balance.
         * 
         */
        temp->amt-=withdrawalAmount;
        printf("Balance: %.2f\n",temp->amt);
    }
}