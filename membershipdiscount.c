#include<stdio.h>
int main()
{
    float amount,discount,delivery_fee,final_amount;
    int membership_type;
    printf("enter the amount:");
    scanf("%f",&amount);
    printf("enter the membership type(1 for premium and 0 for regular)");
    scanf("%d",&membership_type);
    //printf("%d",membership_type);
    switch(membership_type)
    {
        case 1://premium
        
        if(amount>=500)
        {
            
           discount=amount*0.1;
           delivery_fee=0;
            
        }
        else{
            discount=0;
            delivery_fee=50;
        }
        break;
        case 0:
        if(amount>=500)
        {
           discount=0;
           delivery_fee=0;
        }
        else{
            discount=0;
            delivery_fee=50;
        }
        break;
         default:
          printf("/n wrong input");
          break;
        
    }
   
     final_amount=amount-discount+delivery_fee;
        printf("final_amount:₹%lf",final_amount);
        
       
         
}