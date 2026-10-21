#include<stdio.h>
int main()
{
   int user_id,password;
   int stored_id=101;
   int stored_password=4321;
   printf("\nEnter Userid:");
   scanf("%d",&user_id);
   if(user_id!=stored_id)
   {
       printf("\nUser not found");
   }
   else
   {
        printf("\nEnter Password:");
        scanf("%d",&password);
       if(password==stored_password)
       {
           printf("\n Login Successful");
       }
       else
       {
           printf("\n Incorrect Password");
       }
   }
}