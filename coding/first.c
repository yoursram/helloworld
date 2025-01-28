#include<stdio.h>
//sum of two number using functions
// int  main(){
//    add();
//    // int x;
//    // x=add();
//    // printf("The sum of numbers =%d",x);
// }
//  int add(int a,int b){
//    int sum;
//     printf("enter the a&b values:");
//     scanf("%d \n%d",&a ,&b);
//    sum=a+b;
//    printf("%d",sum);
//  }



//reverse of num using function;
// int reverse(int);
// void main(){
//   int n,a;
//   printf("enter n:");
//   scanf("%d",&n);
//   reverse(n);
//   // a=reverse(n);
//   // printf("reverse num=%d",a);
// }
//   reverse(int x){
//   int a,rev=0;
//   while(x!=0){
//     a=x%10;
//     rev=rev*10 +a;
//     x/=10;
//   }
//   //return rev;
//   printf("%d",rev);
// // }

// //gcd of three numbers
// int main(){
//   int num1,num2,num3,i,gcd=1;
//   printf("enter three values :");
//   scanf("%d %d %d",&num1,&num2,&num3);
//  int min=(num1<num2)?((num1<num3)?num1:num3):((num2<num3)?num2:num3);
//  for(i=1;i<=min;i++){
//   if(num1 %i==0 && num2 %i==0 && num3 %i==0){
//     gcd=i;
//   }
//  }printf("gcd of three num %d",gcd);
//  return 0;
// }


//prime up to the range 
// int main(){
//   int n,i,j;
//   printf("enter the range :");
//   scanf("%d",&n);

//  for(i=2;i<=n;i++){
//         int c=1;
 
//  for(j=2;j*j<=i;j++){
//   if(i%j==0){
//      c=0;
//   }
// }if (c){
//  printf("%d\n",i);
//  }
// }return 0;
// }


//
// int main(){
//   int i,j,n=3;
//   // printf("enter n:");
//   // scanf("%d",&n);
//   for(i=1;i<=n;i++){
//     for(j=1;j<=n;j++){
//       if(j>i){
//         printf(" ");
//       }
//       else {
//         printf("j");
//       }
//     }
//   }printf("\n");
// }
// #include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if exactly two arguments are passed
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    // Convert arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculate and display the sum
    int sum = num1 + num2;
    printf("The sum is: %d\n", sum);

    return 0;
}




