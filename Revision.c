#include<stdio.h>
int fact( int nfact,int rfact ,int nrfact){
    int factorial = nfact / (rfact*nrfact);
    printf("the factorial is : %d",factorial);
}
int main (){
    int n ,r ,i ;
    printf(" Enter n : ");
    scanf("%d", &n);
    printf(" Enter r : ");
    scanf("%d",&r);
    int nfact = 1;
    int rfact = 1;
    int nrfact =1;
    for(i=2 ;i<=n ;i++){
        nfact =nfact*i;
    }
    for(i=2 ;i<=r ;i++){
        rfact =rfact*i;
    }
    for(i=2 ;i<=n-r ;i++){
        nrfact =nrfact*i;
    }
    fact(nfact,rfact,nrfact);
}