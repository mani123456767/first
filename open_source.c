#include<stdio.h>
int main(){
         int num,reversed=0;
         printf("enter a number:");
         scanf("%d",&num);
         while(num>0){
            int rem=num%10;

            reversed*=10;
            reversed+=rem;
            num/=10;
         }
         printf("reversed number:%d\n",reversed);
         return 0;

    }
