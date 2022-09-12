#include<stdio.h>
// Write a program in C to find the sum of all elements of the array.
int main () {
    int arr[100];
    int n;
    int i;
    int sum = 0;
    
        printf("Input the number of Elements  to be  stored  in array: ");
        scanf("%d", &n);

        printf("Input %d element in array :\n" , n);
        for(i=0;i<n;i++) {
            printf("Element %d --" , i);
            scanf("%d" , &arr[i]);
        }
        
                for(i=0; i<n; i++) {
                sum += arr[i];
                }

        printf("SUM of stored Element of array : %d\n\n" , sum);
        
}