#include <stdio.h>
//1. C Program to find LCM of 3 given numbers using recursive functions.
// int main(){
//     int nm1,nm2,nm3;
//     printf("enter three values:");
//     scanf("%d %d %d",&nm1,&nm2,&nm3);
//     int q=threelcm(nm1,nm2,nm3);
//     printf("lcm of three nums:%d",q);
//     return 0;
// }

// int threelcm(int a,int b,int c){
//     return lcm(lcm(a,b),c);
//     //return lcm(a,b);
// }
// int lcm(int a,int b){
//     return a*b/gcd(a,b);
//     //return gcd(a,b);
// }

// int gcd(int a,int b){
//     while(b!=0){
//         int temp =b;
//         b=a%b;
//         a=temp;
//     }int gcd=a;
//     return a;
// }


//2. C program to reverse a given integer number using recursive functions.

// int reverse(int num, int rev) {
//     if(num==0){
//         return rev;
//  }
//     rev = rev * 10 + num % 10;
//     return reverse(num / 10, rev);
// }
// int main(){
//     int n,q;
//     printf("enter an integer:");
//     scanf("%d",&n);
//     q=reverse(n,0);
//     printf("%d",q);
//     return 0;
// }


//3. C program to find sum of natural numbers using recursive function.

// int sumofnum(int a){
//     if (a==0){
//         return 0;
//     }
//     return a+sumofnum(a-1); 
// }
// int main(){
//     int n;
//     printf("enter range of sum:");
//     scanf("%d",&n);
//     int q=sumofnum(n);
//     printf("sum of natural nums=%d",q);
//     return 0;
// }


//4. C Program to find the power of a given number using recursive functions.

// int powernum(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     return n*powernum(n,p-1);
// }

// int main(){
//     int n,p;
//     printf("enter number:");
//     scanf("%d",&n);
//     printf("enter power:");
//     scanf("%d",&p);
//     int w=powernum(n,p);
//     printf("%d",w);
//     return 0;
// }