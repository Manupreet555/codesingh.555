#include <stdio.h>
int main(){
    // int x,a,b,y,c,d ;
    // printf(" Enter number ");
    // scanf("%d",&x);
    // a = x % 10;
    // y = x /10 ;
    // b = y % 10 ;
    // c = y / 10 ;
    // d = (a*a*a )+(b*b*b)+(c*c*c);
    // if(d == x ){
    //     printf(" Its is armstrong");
    // }else{
    //     printf(" No its is not ");
    // }
    // return 0 ;

    // Step 2  
   
     int a , y ,s =0 ,t;
     printf(" Enter number :- ");
     scanf(" %d",&a );
     a = y;
     while(a!=0)
     {
      t = a % 10 ; 
      s = s * (t*t*t);
      a = a/10 ;
     }
     if(s==y){
        printf(" Its is Armstrong ");
     }
     else {
        printf(" Its is not an Armstrong ");
     }
    return 0;
}