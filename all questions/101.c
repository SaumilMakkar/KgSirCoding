#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fptr;
fptr=fopen("hello.txt","r");
FILE *fptr2;
fptr2=fopen("copy.txt","w");

if(fptr==NULL||fptr2==NULL){
printf("Error");
}
char ch;
while(1){

ch=fgetc(fptr);
if(ch==EOF)break;
fputc(ch,fptr2);

}
fclose(fptr);
fclose(fptr2);
 return 0;
}