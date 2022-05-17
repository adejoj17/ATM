#include <stdio.h>
#include <stdlib.h>
int  jojusatm(){
    int choice, deposit, withdraw, transfer, payment, payments, paymentss, i;
    int amount=3000, newamount=0, newamounts;
    char nepa;
    int pin=8888;
    
     printf("welcome to joju bank :)");
     printf("\n\n");
     printf("enter card number:  ");
     scanf("%d", &pin);
     if(pin!=8888){
        printf("Enter a valid pin");
return 0;
     }
     printf("\n\n");
     printf("please choose transaction\n");
     printf("\n\n");
     printf("1-check balance\n");+
     printf("2-withdraw\n");
     printf("3-deposit cash\n");
     printf("4-transfer\n");
     printf("5-payments\n");
     printf("6-exit\n");      
     printf("\n\n");
     printf("enter your choice:  ");
     scanf("%d", &choice);

     if (choice==1)
     {
         printf("current balance in your account: %d\n", amount); 
         return 0;
     }
  else if (choice==2)
     {
        printf("enter the amount you want to be withdrawn: ");
        scanf("%d", &withdraw);
        if (withdraw>(amount-500))
        {
           printf("Insufficient account balance");
        }
        else if (withdraw%100!=0)
        {
           printf("Enter amount in multiples of 100\n");
        return 0;
        }
        
        else{
           printf("%d withdrawn sucessfully!!\n",withdraw);
           amount=amount-withdraw;
           printf("Your new account balance is %d\n",amount);
          return 0;
        }
        
        
     }
     if (choice==3)
     {
        printf("please enter the amount you want to deposit: ");
        scanf("%d", &deposit);
     }
     if (deposit>=5000)
     {
        printf("too much money");
     }
    
      else
     {
         newamounts=amount+deposit;
         printf("your current balance is: %d\n", newamounts);
     }

     if (choice==4)
     {
         printf("how much do you want to transfer: \n");
         scanf("%d", &transfer);
     }

     if (transfer>amount)
     {
         printf("insufficient funds...\n");
     }

     else
     {
        newamount=amount-transfer;
        printf("\nyour current balance is: %d\n", newamount);
     }
     

     if (choice==5)
     {
        printf("\nplease choose what you would like to pay for");
        printf("\n\n");
        printf("7->nepa\n");
        printf("8->water\n");
        printf("9->dsTV\n");
        printf("\n\n");
        printf("what would you like to pay for: ");
        scanf("%d", &choice);
     }

     if (choice==7)
     {
         printf("how much would you like to pay for NEPA?: ");
         scanf("%d", &payment);
     }

     if (payment>amount)
     {
        printf("insufficient funds");
     }
     else
     { 
        newamounts=amount-payment;
        printf("your balance is: %d\n", newamounts);
        return 0;
     }
    
    
     if (choice==8)
     {
        printf("how much would you like to pay for water: ");
        scanf("%d", &payments);
     }
    
     if (payments>amount)
     {
        printf("\ninsufficient funds");
     }
     else
     {
        newamount=amount-payment;
        printf("\nyour balance is: %d\n", newamount);
        return 0;
     }

     if (choice==9)
     {  printf("how much would you like to pay for dstv?: ");
        scanf("%d", &payment);
     }

     else if (payment>amount)
     {
        printf("\ninsufficient funds");
     }

     else
     {
        newamount=amount-payment;
        printf("\nyour balance is: %d\n", newamount);
        return 0;
     }
     

      if (choice==6)
     {
         printf("\n\nthank you for using our services\n\n");
     }
     

    
    }
 
int main()
{    
int anothertransaction;
jojusatm();
printf("\nWould you like to perform another transaction?:\n1.proceed\n2.Exit\n");
scanf("%d",&anothertransaction);
if (anothertransaction==1)
{
   jojusatm();
}
else if(anothertransaction==2){
   printf("Thanks for using this atm service");
}
else{
   printf("Invalid inputation");
   return 0;
}



    return 0;

}