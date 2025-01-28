#include <stdio.h>
//frequent of element in array
int main(){
int arr[]={1,2,3,5,4,5,1,3,1,2};
int j,count=0,i,p,q=0;
for(i=0;i<10;i++){
    for(j=0;j<10;j++){
    if(arr[i]==arr[j])
    count++;  
 }for(p=0;p<i;p++){
   if(arr[i]==arr[p]){
    q++;     }
 }
if(q==0)
printf("%d-%d\n",arr[i],count);
//count=0;
}
return 0;
}

//largest and smallest among array:
// int main(){
//     int arr[100],i,j,n,max,min;
//     printf("enter the range og array:");
//     scanf("%d",&n);
//     printf("enter the elements in array");
//     for(i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     max=arr[0];
//     min=arr[0];
//     for(i=0;i<n;i++){
//         if(max<arr[i])
//         max=arr[i];
//         if(min>arr[i])
//         min=arr[i];
//     }
// printf("%d~%d",min,max);
// return 0;
// }


//find the number of non repeated elements in an array.
//  int main(){
//  int arr[]={1,2,2,3,5};
//  int j,count=0,i;
//  for(i=0;i<5;i++){
//      for(j=0;j<5;j++){
//      if(arr[i]==arr[j])
//      count++;  }
//      if(count==1)
//      printf("%d\n",arr[i]);
//      count=0;
//      }
//      return 0;
//  }



// Program to find 2nd largest and 2nd smallest element in an array.
// int main(){
//     int arr[100],i,j,n,max,min,iimax,iimin;
//     printf("enter range of n:");
//     scanf("%d",&n);
//     printf("enter the elelments in array:");
//     for(i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     for (int i = 0; i < n; i++) {
//         // Update largest and second largest
//         if (arr[i] > max) {
//             iimax = max;
//             max = arr[i];
//         } else if (arr[i] > iimax && arr[i] != max) {
//              iimax = arr[i];
//         }

//         // Update smallest and second smallest
//         if (arr[i] < min) {
//             iimin = min;
//             min = arr[i];
//         } else if (arr[i] < iimin && arr[i] != min) {
//              iimin = arr[i];
//         }
//     }printf("%d~%d",iimax,iimin);
//     return 0;
// }


//C Program to put odd and even elements of given arrays into two separate arrays.
// int main(){
//     int arr[100],i,j=0,n,k=0,even[100],odd[100];
//     printf("enter n:");
//     scanf("%d",&n);
//     printf("enter elements of array:");
//     for(i=0;i<n;i++)
//     scanf("%d",&arr[i]);
// j=0;
// k=0;
//     for(i=0;i<n;i++){
//         if (arr[i]%2==0){
//         even[j]=arr[i];
//         j++;}
        
//         else{
//         odd[k]=arr[i];
//         k++;      
//     }
// }
// printf("even\n");
// for(i=0;i<j;i++){
//     printf("%d\n",even[i]);}

//     printf("\n");

// printf("odd\n");

// for(i=0;i<k;i++){
//     printf("%d\n",odd[i]);
// }return 0;
// }


//C Program to find sum and average of all elements in an array.
// int main(){
//     int arr[50],i,n,sum=0,avg;
//     printf("enter range of array:");
//     scanf("%d",&n);
//     printf("enter the elelments in array:");
//     for(i=0;i<n;i++){
//     scanf("%d",&arr[i]);}

//     for(i=0;i<n;i++){
//     sum=sum+arr[i];}
// avg=sum/n;
// printf("sum = %d\n avg = %d",sum,avg);
// return 0;
// }


//C Program to copy the elements of one array to another array.
// int main(){
//     int R[30],A[30],i,j,n;
//    printf("enter range of array:");
//    scanf("%d",&n);
//    printf("enter the elements in array:");
//    for(i=0;i<n;i++){
//     scanf("%d",& R[i]);
//    }

// for(i=0;i<n;i++){  
//         A[i]=R[i];     
// printf("array R = %d\n",R[i]);
// printf("array A = %d\n",A[i]);
// }
//                                     //either we can use for loop for print together !
// return 0;
// }


//C Program to merge two arrays into third array
// int main(){
//     int arr1[]={1,2,3};
//     int arr2[]={7,8,9};
//     int merge[100],i,j,n;
//     for(i=0;i<3;i++){
//         merge[i]=arr1[i];
        
//     }
//     for(i=0;i<3;i++){
//         merge[i+3]=arr2[i];
        
//     }
//     for(i=0;i<6;i++){
//         printf("%d\n",merge[i]);
//     }

    

// return 0;
// }