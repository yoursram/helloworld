frequent of element in array
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
count=0;
}
return 0;
}