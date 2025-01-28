#include <stdio.h>
//structure to function
//  struct book{
//     char title[30];
//     float prize;
//  };       //call by value 

// void update(struct book B){
//     B.prize = 300;
//     printf("prize in fn is %f\n",B.prize);
// }
// int main(){
//     struct book B1;
//     B1.prize = 150;
//     printf("prize in main fn %f\n",B1.prize);
//     update(B1);
//     printf("prize after fn call %f",B1.prize);
// }



           //call by reference

// void update(struct book *B)//formal parameter 
// {
//     int a=B -> prize;
//     B -> prize = 300;
//     printf("prize in fn %d\n",a);
// }
// int main(){
//     struct book B1;
//     B1.prize=150;
//     printf("prize in main %f\n",B1.prize);
//     update(&B1);//actual parameter 
//     printf("prize after fn call %f",B1.prize);
// }


struct students {
    char name[10];
    int no;
    int marks[6];
};

void main(){
    int i,j,n,sum=0;
    printf(" enter the n \n");
    scanf("%d",&n);

    struct students s[n];
    for(i=0;i<n;i++){
        printf("Student %d details\n",i+1);
        scanf("%s %d",s[i].name,&s[i].no);
        printf("6 subject -marks\n");
        for(j=0;j<6;j++){
            scanf("%d",&s[i].marks[j]);
        }
    }

    for(i=0;i<n;i++){
        printf("%s %d",s[i].name,s[i].no);
        for(j=0;j<6;j++){
             sum+=s[i].marks[j];
        }
        int avg=sum/6;
        printf("avg of 6-sub %d\n",avg);
    }

}


 