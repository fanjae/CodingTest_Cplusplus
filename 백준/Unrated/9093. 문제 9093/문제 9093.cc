#include <stdio.h>
#include <string.h>
int main(){
   int n=0,move=0,count=0,base=0;
   scanf("%d",&n);
   getchar();
   while(n--){
   		char word[2000];
      gets(word);
      int len=strlen(word);
      for(int i=0;i<len;i++){
         if(word[i]==' '){
            for(int j=i-1;j>=base;j--){
               printf("%c",word[j]);
            }
            printf(" ");
            base=i+1;
         }
         if(word[i+1]=='\0'){
            for(int j=i;j>=base;j--){
               printf("%c",word[j]);
            }
            printf("\n");
            base=0;
         }
      }   
   }
}