#include<stdio.h>
int main(){
    // for(int i =1 ;i<=5;i++){
    //   for (int j=1 ;j<=5 ;j++){
    //     printf("*");
    //   }
    //   printf("\n");
    // }
    //// 

    // for(int i =1 ;i<=5;i++){
    //   for (int j=1 ;j<=5 ;j++){
    //     if(j>=6-i){ 
    //     printf("*");
    //     }
    //     else{
    //      printf(" ");
    //     }
    // }  
    // printf("\n");
    // }

    int i ,j; 
    for(i=1 ;i<=4 ;i++){
        for (j=1 ; j<=7 ;j++){
            if(j>=5-i && j<=3+i){
               printf("*");
            }
            else{
             printf(" ");
            }
        }
        printf("\n");
    }
}