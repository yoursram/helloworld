#include<stdio.h>
int main(){
    int i,j,n,min;
    int a[100];
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
         min = i;
        for(j=i+1;j<n;j++){
            if (a[j]<a[min]){
                min=j;              
            }         
        }
        if(min!=i){
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }for(i=0;i<n;i++){
        printf("%d",a[i]);}
        return 0;
    }
