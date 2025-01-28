#include<stdio.h>
// int main()
// {
//   int a[100],i,j,n,temp;
//     printf("enter n:");
//     scanf("%d",&n);
//     printf("enter elements of array:");
//     for(i=0;i<n;i++){
//     scanf("%d",&a[i]);}
//     for(i=0;i<n;i++){
//         int flage=0;
//         for(j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//                 flage=1;
//             }
//         } if (flage==0){
//             break;
//         }
//     }
//     for(i=0;i<n;i++){
//     printf("%d",a[i]);}
//     return 0;  
// }

//sorting using pointers 

// #include <stdio.h>

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int *ptr = arr; // Pointer to the array
//     int temp;

    // Bubble sort logic
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (*(ptr + j) > *(ptr + j + 1)) {
//                 // Swap using pointers
//                 temp = *(ptr + j);
//                 *(ptr + j) = *(ptr + j + 1);
//                 *(ptr + j + 1) = temp;
//             }
//         }
//     }

//     // Printing the sorted array
//     printf("Sorted array: \n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", *(ptr + i));
//     }

//     return 0;
// }
