#include <stdio.h>
int main (){
    int n ,s=0 , r ,y ; 
    printf("Enter number ");
    scanf("%d",&n);
    n = y;
    while(n!=0){
        r = n%10;
        s = (s*10)+r;
        n =n/10;
     }
     if(s=n){
        printf(" It is palindrome ");
     }else{
        printf("It is not palindrom ");
     }
    
}