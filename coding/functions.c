#include<stdio.h>
//factiorial of given number using recursive function
// int main(){
//     int n,a;
//     printf("enter the number:");
//     scanf("%d",&n);
//     a=fact(n);
//     printf("%d",a);
//     return 0;
// }
// int fact(int n){
//     if (n==1 || n==0){
//         return 1;
//     }
//     else 
//        return n*fact(n-1);
            
// }

//GCD OF TWO numbers using recursive function
// int gcd(int n1, int n2);
// int main(){
//     int a,n1,n2;
//     printf("enter two values:");
//     scanf("%d %d",&n1,&n2);
//     a=gcd(n1,n2);
//     printf("%d",a);
//     return 0;

// }
// int gcd(int n1,int n2){
//     if(n2==0){
//         return n1;
//     }
//     else
//         return gcd(n2,n1%n2);
    
// }

//given number is a palindrom or not using recursive function
// int palindrome(int n);
// int main(){
//     int n,a;
//     printf("enter the number:");
//     scanf("%d",&n);
//     a=palindrome(n);
//     if(a==1){
//         printf("palindrome");
//     }
//     else
//     {
//         printf("not a palindrome");
//     }
    
// return 0;


// }
// int palindrome(int n){
//     int rev=0,rem,temp;
//     temp=n;
//     while(n>0){
//         rem=n%10;
//         rev=rev*10+rem;
//         n/=10;
//     }
//     if (rev==temp){
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }


//swapping of two numbers call by reference
// int swap(int *a,int *b);
// int main(){
//     int a,b,n;
//     printf("enter two numbers:");
//     scanf("%d %d",&a ,&b);
//     n=swap(&a,&b);
//     printf(" after swapping\n a=%d b=%d",a,b);
//     return 0;
// } 
// int swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     return 0;
// }

