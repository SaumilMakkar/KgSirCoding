#include<stdio.h>
#include<string.h>
int main()
{
FILE *fptr;
fptr=fopen("data.txt","r+");
if(!fptr){
    printf("Not found");
}
char buffer[100];
fgets(buffer,100,fptr);
printf("%s",buffer);
fseek(fptr,0,SEEK_END);
fputs("This message is written by program",fptr);
fclose(fptr);







 return 0;
}