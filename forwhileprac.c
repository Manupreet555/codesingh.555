#include<stdio.h>
# include<stdlib.h>
int main (){
    // int i = 1;
    // while(i<3){
    //        printf("hello\n");
    //        i++;
    // }
    
    // int s =1 ;
    // while (s!=8){
    //     printf("hello\n");
    //     s++;
    // }

        // SWITCH CASE 
    while(1){
        int ch ,x ,y,z;
       printf(" press 1 for Addition\n ");
       printf(" press 2 for subtraction\n ");
       printf(" press 3 for Multiplication\n ");
       printf(" press 4 Exit !! ");
    scanf ("%d",&ch); 
    switch (ch)
    {
    case 1 :
      {
        printf(" Enter 2 number ");
        scanf("%d %d ",&x,&y);
        z =x+y;
        printf("\nthe addition is :- %d",z);
        break;
      }  
      
    case 2 :
      {
        printf(" Enter 2 number ");
        scanf("%d %d ",&x,&z);
        y =x-z;
        printf("\nthe Subtraction is :- %d",y);
        break;
      }  

    case 3 :
      {
        printf(" Enter 2 number ");
        scanf("%d %d ",&x,&z);
        y =x*z;
        printf("\nthe Multiplication  is :- %d",y);
        break;
      } 
    case 4 : 
      {
        exit (0);
      }
    default:
      printf("Wrong in put ");
    }
    }

    
}