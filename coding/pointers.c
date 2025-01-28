#include<stdio.h>
// int main(){
//     int i,j,n;
//     int a[10];
//     int *ptr=a;
//     printf("enter the no of elements in array");
//     scanf("%d",&n);
//     printf("enter the elements in array") ;
//     for(i=0;i<n;i++){
//     scanf("%d",(ptr+i));}
//     for(i=n-1;i>=0;i--){
//         printf("%d",*(ptr+i));
//     }
// }

// 8.	Write a C Program to read time in hours, minutes, seconds using structures and perform the following operations on time.
// Addition of two time periods
// Subtraction of two time periods

// struct time {
//     int hours;
//     int minutes;
//     int seconds;
// };

// int main(){
//     struct time t1,t2,sum,diff;
//     printf("enter the  1st time:");
//     scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
//     printf("enter the 2nd time :");
//     scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
    

//     sum.seconds=t1.seconds+t2.seconds;
//     sum.minutes=t1.minutes+t2.minutes+sum.seconds/60;
//     sum.seconds%=60;
//     sum.hours=t1.hours+t2.hours+sum.minutes/60;
//     sum.minutes%=60;
//     sum.hours%=24;

//     printf("%d %d %d\n",sum.hours,sum.minutes,sum.seconds);

//     int totalsec1=t1.hours*3600+t1.minutes*60+t1.seconds;
//     int totalsec2=t2.hours*3600+t2.minutes*60+t2.seconds;
//     diff.seconds=totalsec1-totalsec2;

//     if(diff.seconds<0){
//         diff.seconds+=12*3600;
//     }

//     diff.hours=diff.seconds/3600;
//     diff.minutes=(diff.seconds%3600)/60;
//     diff.seconds=diff.seconds%60;

//     printf("%d %d %d ",diff.hours,diff.minutes,diff.seconds);
//     return 0;

// }

// 9.	Write a C Program to read distance in inches and feet using structures and perform the following operations 
// Add two distances
// Subtract two distances

// struct distance{
//     int feet;
//     int inches;
// };

// int main(){
//     struct distance d1,d2,sum,diff;

//     printf("enter the  1st distance in inches and feet : ");
//     scanf("%d %d",&d1.inches,&d1.feet);
//     printf("enter the 2nd distance in inches and feet:");
//     scanf("%d %d",&d2.inches,&d2.feet);

//     sum.inches=d1.inches+d2.inches;
//     sum.feet=d1.feet+d2.feet+sum.inches/12;
//     sum.inches%=12;

//     printf("sum=%d %d\n",sum.inches,sum.feet);

//     int totalinches1=d1.feet*12+d1.inches;
//     int totalinches2=d2.feet*12+d2.inches;
//     diff.inches=totalinches1-totalinches2;

//     if(diff.inches<0){
//         diff.inches=-(diff.inches);
//     }

//     diff.feet=diff.inches/12;
//     diff.inches=diff.inches%12;

//     printf("diff=%d %d",diff.inches,diff.feet);
// }

// 13.	Write a C Program to Create a structure to specify data of customers in a bank.
//  The data to be stored is: Account number, Name, Balance in account. 
// (a) Write a function to print the Account number and name of each customer with balance below Rs. 100. 
// (b) If a customer request for withdrawal or deposit,
//  it is given in the form: Acct. no, amount, code (1 for deposit, 0 for withdrawal) 
 

//  struct customer{
//     int accno;
//     char name[23];
//     float balance;
//  };

//  void printlowbalance(struct customer customers[],int n){
//     for(int i=0;i<n;i++){
//         if(customers[i].balance < 100){
//             printf("acc no %d\n and name is %s",customers[i].accno,customers[i].name);
//         }
//     }

//  }

//  int main(){
//     int n,i;
//     printf("enter the number of customers:");
//     scanf("%d",&n);

//     struct customer customers[n];

//     for(i=0;i<n;i++){
//         printf("customer %d\n",i+1);
//         printf("enter the acc no:\n");
//         scanf("%d",&customers[i].accno);
//         printf("enter name");
//         scanf("%s",customers[i].name);
//         printf("enter balance:");
//         scanf("%f",&customers[i].balance);
//     }

//     printlowbalance(customers,n);
//     return 0;

//  }


// 6.	Write a C program to store name, roll number, year and marks of three subjects of n students 
// and print the student the name, roll number, average and grade based
//  on average marks of the student using structures.

//  struct student {
//     char name[100];
//     int rollno;
//     int year;
//     int s1,s2,s3;
//  };


//     int main(){
//     int i,j,n;
//     char grade;
//     printf("enter the no of numbers:");
//     scanf("%d",&n);

//     struct student students[n];

//     for(i=0;i<n;i++){
//         printf("student %d\n",i+1);
//         printf("enter name\n");
//         scanf("%s",students[i].name);
//         printf("enter rollno:\n");
//         scanf("%d",&students[i].rollno);
//         printf("enter year:");
//         scanf("%d",&students[i].year);
//         printf("enter the marks in three subjects:");
//         scanf("%d %d %d",&students[i].s1,&students[i].s2,&students[i].s3);
//     }

//     printf("average marks of student in three subject\n");
//     for(i=0;i<n;i++){
//         int sum=0;
//      sum=students[i].s1+students[i].s2+students[i].s3;
//      int avgmarks=sum/3;

//     if(avgmarks>=90){
//         grade='a';
//     }else if(avgmarks>=70){
//         grade='b';
//     }else if(avgmarks>=50){
//         grade='c';
//     }else{
//         grade='d';
//     }
//     printf("\nStudent %d:\n", i + 1);
//         printf("Name: %s\n", students[i].name);
//         printf("Roll Number: %d\n", students[i].rollno);
//         printf("Average Marks: %.2d\n", avgmarks);
//         printf("Grade: %c\n", grade);
//     }
//     return 0;

//  }


//read the elements in array and print them in sorted order using pointer in c
//bubble sort method in sorting

#include<stdio.h>
int main()
{
  int a[100],i,j,n,temp;
  int *ptr=a;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++){
    scanf("%d",(ptr+i));}
    for(i=0;i<n;i++){
        int flage=0;
        for(j=0;j<n-i-1;j++){
            if(*(ptr+j)>*(ptr+j+1)){
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
                flage=1;
            }
        } if (flage==0){
            break;
        }
    }
    for(i=0;i<n;i++){
    printf("%d",*(ptr+i));}
    return 0;  
}


