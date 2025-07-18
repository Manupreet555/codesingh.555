#include<stdio.h>
#include<stdlib.h>
int add( int x,int  y,int z ){
            printf(" Enter 2 Number ");
            scanf("%d %d", &x,&y);
            z=x+y;
            printf(" The Addition is :- %d",z);
            return z ;
}
int sub(int x,int  y,int z){
            printf(" Enter 2 Number ");
            scanf("%d %d", &x,&y);
            z=x-y;
            printf(" The Subtraction  is :- %d",z);
            return z;
}
int mul(int x,int  y,int z){
            printf(" Enter 2 Number ");
            scanf("%d %d", &x,&y);
            z=x*y;
            printf(" The Multiply is :- %d",z);
            return z;
}
void main(){
    int ch,x,y,z;
    printf(" \nPress 1 for Add ");
    printf(" \nPress 2 for Sub ");
    printf(" \nPress 3 for Multiply ");
    printf("\n  enter number 4 for exit");
    while(1){
        printf("\n \nEnter any above :-");       
        scanf("%d",&ch);
    switch(ch){
        case 1 :
        {
            add(x,y,z);
            break;
        }
          case 2 :
        {
            sub(x,y,z);
            break;
        }
          case 3:
        {
            mul(x,y,z);
            break;
        }
        case 4:
        {
           exit (0);
        }
        default :
        {
            printf(" Wrong Num");
        }
    }
    }
    }