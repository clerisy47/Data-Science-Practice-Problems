// Calculates standard deviation of elements in a 1d array

#include<stdio.h>
#include<math.h>
float standard_deviation(int arr[], int n){
    int i;
    float sum_1=0, sum_2=0, mean;

    for(i=0; i<n; i++){
        sum_1 += arr[i];
    }
    mean = sum_1/n;
    for(i=0; i<n; i++){
        sum_2 += pow(arr[i]-mean, 2);
    }
    return sqrt(sum_2)/n;
}

int main(){
    int arr[]= {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]); 
    // We can't use for loop as the array is filled with garbage values. And it must be defined in main function.
    printf("The standard deviation of elements are: %f", standard_deviation(arr, n));
    return 0;
}