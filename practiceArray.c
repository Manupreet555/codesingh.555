#include <stdio.h>
int main (){
//   int arr[10],sum=0,avg;
//   printf(" Enter number n ");
//   for(int i=0 ;i<10;i++){
//     printf("%d",i+1);
//     scanf("%d",&arr[i]);
//    sum += arr[i];
//  float avg = sum/10.0;
//   }
//    printf("%d",sum);

int arr[10];     // Declare an array of size 10
    int sum = 0;     // Variable to store the sum

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);   // Input each element
        sum += arr[i];          // Add current element to sum
    }

    printf("The sum of all elements is: %d\n", sum);

    return 0;
}