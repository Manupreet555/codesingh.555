#include <stdio.h>
struct book
{
    int b_no;
    float b_Price;
};

int main () {
    struct book b1 ,b2;
    b1.b_no = 1;
    b1.b_Price=90.50;
    b2.b_no=2;
    b2.b_Price=88.50;
    printf(" %d %.2f \n",b1.b_no,b1.b_Price);
    printf(" %d %.2f \n",b2.b_no,b2.b_Price);
    }

// struct student {
//     int Roll_Number  ;
//     int Total_Marks ;
//     char name [10 ] ;
//     float marks  ;
    
// } ;
    
// int main (){
//    struct student s1;
//    printf(" Enter Roll_Number :- , Total marks:-  , Name :-   , Marks :-  ");
//    scanf("%d %d %f %s",&s1.Roll_Number,&s1.Total_Marks,&s1.marks,s1.name);  
//    printf("%d %d %.2f %s",s1.Roll_Number,s1.Total_Marks,s1.marks ,s1.name);
 