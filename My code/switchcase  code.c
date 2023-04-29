#include<stdio.h>
int main()
{
 int a;
 printf("Enter the number: ");
 scanf("%d",a);
  
   switch(a>0)
   {
    case 1:
        printf("The number is positive");
    case 0:    
            switch(a<0)
            {
                case 1:
                  printf("The number is negative");
                case 0:
                  printf("The entered number is neither negative nor positive");  
            }
        }
        return 0;
   }

