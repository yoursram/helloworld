 #include<stdio.h>
 #include<string.h>
// // 1.C Program to insert a sub string into main string at a given position.
// int main(){
    
//     char mainstr[100],substr[100],temp[100];
//     int position,i;
//     printf("enter main string:");
//     scanf("%s",mainstr);
//     printf("enter sub string:");
//     scanf("%s",substr);
//     printf("enter the position:");
//     scanf("%d",&position);

//     int mainlen=strlen(mainstr);
//     int sublen=strlen(substr);

//     if( position < 0 ||  position > mainlen){
//         printf("invalid position");
//         return 0;
//     }

// for(i=0;i<position;i++){
//      temp[i]=mainstr[i];
// }
// for (i=0;i<sublen;i++){
//      temp[i+position]=substr[i];
// }
// for (int i = position; i <= mainlen; i++) {
//         temp[sublen + i] = mainstr[i];
// }
//  strcpy(mainstr,temp);
//  printf("%s",mainstr);
//  return 0;
 
// }


//2. C Program to delete n characters from given string from the given position.
// int main(){
//     char mainstr[100];
//     int i,position,n;
//     printf("enter main string:");
//     scanf("%s",mainstr);
//     printf("no of char to delete:");
//     scanf("%d",&n);
//     printf("enter position:");
//     scanf("%d",&position);

//     int mainlen=strlen(mainstr);

//     for(i=position;i<=mainlen-n;i++){
//         mainstr[i]=mainstr[i+n];
//     } 
//     printf("%s",mainstr);
//     return 0;
// }