#include <stdio.h>
//5.print sum of digits using non recursive functions.
// int main(){
//     int n,a;
//     a=sum(n);
//     printf("sum of digits= %d",a);
//     return 0;

// }

// int sum(int x){
//     int sum=0;
//     printf("enter the digits:");
//     scanf("%d",&x);
//     while(x>0){
//         sum+=x%10;
//         x/=10;
//     }
//     return sum;
// }

// 9.C program to find sum of natural numbers using non recursive function.
// int sumofn(int x){
//     int sum=0,i;
//     for(i=1;i<=x;i++){
//         sum=sum+i;
//     }return sum;
// }

// int main(){
//     int n,sum;
//     printf("enter value of n:");
//     scanf("%d",&n);
//     sum=sumofn(n);
//     printf("%d",sum);
//     return 0;
// }

//10.C program to reverse a given integer number using non recursive functions.
// int reversenum(int x){
//     int a,r=0;
//     while(x>0){
//         a=x%10;
//         r=r*10+a;
//         x/=10;
//     }return r;
// }

// int main(){
//     int n,a;
//     printf("enter the number:");
//     scanf("%d",&n);
//     a=reversenum(n);
//     printf("reverse of num = %d",a);
//     return 0;
// }


//C Program to find LCM of 2 given numbers using non recursive functions.
// int lcm(int x,int y){
//     int max;
//     max=(x>y)?x:y;
//     while( x > 0){
//         if (max%x==0 && max%y==0){
//             int lcm=max;
//         break;}
//         max++;        
//     }return max;
// }
// int main(){
//     int num1,num2,a;
//     printf("enter two values:");
//     scanf("%d %d",&num1,&num2);
//     a=lcm(num1,num2);
//     printf("lcm of two numbers=%d",a);
//     return 0;
// }


//4.C Program to find HCF of 2 given numbers using non recursive functions(Euclidean algorithm)
// int hcf(int x ,int y){
//     int temp,hcf;
//     while(y!=0){
//         temp=y;
//         y=x%y;
//         x=temp;
//     }hcf=x;
//     return x;
// }
// int main(){
//     int n1,n2,a;
//     printf("enter two numbers:");
//     scanf("%d %d",&n1,&n2);
//     a=hcf(n1,n2);
//     printf("HCF = %d",a);
//     return 0;
// }

//8.C Program to find the power of a given number using non recursive functions.
// int power(int x,int y){
//     int mul=1;
//     for(int i=1;i<=y;i++){
//          mul*=x;
//     }return mul;
// }

// int main(){
//     int num1,num2;
//     printf("enter vaule and power respectively:");
//     scanf("%d %d",&num1,&num2);
//     int a=power(num1,num2);
//     printf("%d",a);
//     return 0;
// }


//13.C program to print n Fibonacci terms using non recursion.
// void fibonacci(int x){
//     int a=0,b=1,c,i;            //a=first,b=second;
//     for(i=1;i<=x;i++){
//         if (i==1){
//             printf("%d\n",a);}
//         else if (i==2){
//             printf("%d\n",b);}
//         else{    
//         c=a+b;
//         printf("%d\n",c);
//         a=b;
//         b=c;
//         }
//     }
// }
// int main(){
//     int n;
//     printf("enter range of series:");
//     scanf("%d",&n);
//     fibonacci(n);
//     //
//     return 0;
// }


//14.C program to find sum of all even or odd numbers in given range using non recursion.
// int sumeven(int x){
//     int sum=0,i,j;
//     for(i=1;i<=x;i++){
//         if(i%2==0){
//             sum+=i;
//         }
//     }return sum;
// }
// int main(){
//     int n,a;
//     printf("enter the range:");
//     scanf("%d",&n);
//     a=sumeven(n);
//     printf("%d",a);
//     return 0;
// }


//3. C Program to co primes between 1 and 1000 using non recursive functions.
// int gcd(int a,int b){
//     while(b!=0){
//         int temp=b;
//         b=a%b;
//         a=temp;
//     }
//     return a;
// }

// void funcoprime(int limit) {
//     for(int i=1;i<=limit;i++){
//         for(int j=i+1;j<=limit;j++){
//           if (gcd(i,j)==1){
//             printf("(%d, %d)\n",i,j);
//            }
//         }
//     }
// }

// int main(){
//     int n=1000;
//     printf("co-primes from 1 to %d\n",n);
//     funcoprime(n);
//     return 0;
// }


//13.C Program to find GCD of 3 given numbers using non recursive functions.
// int gcd(int a,int b){
//     while(b!=0){
//         int temp=b;
//         b=a%b;
//         a=temp;
//     }
//     return a;
// }
// int  threegcd(int a,int b,int c){
//       return gcd(gcd(a,b),c);
    
    
// }
// int main(){
//     int num1,num2,num3;
//     printf("enter three values:");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     int n= threegcd(num1,num2,num3);
//     printf("%d",n);
//     return 0;
// }


//7.C Program to find LCM of 3 given numbers using non recursive functions.
// int gcd(int a,int b){
//     while(b!=0){
//         int temp=b;
//         b=a%b;
//         a=temp;
//     }int gcd=a;
//     return a;    
// }

// int lcm(int a,int b){
//      int lcmAB = (a*b)/gcd(a,b);
//      return gcd(a,b);
// }
// int threelcm(int x,int y,int z){
//     return lcm(lcm(x,y),z);
// }
// int main(){
//     int num1,num2,num3;
//     printf("enter three numbers:");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     int n=threelcm(num1,num2,num3);
//     printf("lcm of three nums:%d",n);
//     return 0;
// }

//11.C program to find twin primes between 1 and 1000 using non recursive functions.

// int isPrime(int n){
//     if(n<=1) return 0;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// void twinprimes(int a,int b){
//     printf("twin nums b/w %d & %d\n",a,b);
//     for(int i=a;i<b-2;i++){
//         if(isPrime(i) && isPrime(i+2)){
//             printf("(%d,%d)\n",i,i+2);
//         }

//     }

// }
// int main(){
//     int start=1 ,end=1000;
//     twinprimes(1,1000);
// }

//15.C program to print all strong numbers between 1 and n using non recursion

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }return fact;
// }

// int isstrong(int a){
//     int original=a,sum=0;
//     while(a>0){
//         int digit=a%10;
//         sum+=factorial(digit);
//         a/=10;
//     }return (sum==original);
// }
// void funstrongnum(int x){
//     for(int i=1;i<=x;i++){
//         if(isstrong(i)){
//             printf("%d\n",i);
//         }
//     }
// }
// int main(){
//     int n;
//     printf("enter value n:");
//     scanf("%d",&n);
//     funstrongnum(n);
//     return 0;
// }








