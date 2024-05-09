#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fptr=fopen("userinput.txt","a");
    printf("welcome");
    if(fptr==0){
        printf("could not open file"); 

    }
    char input[100];
    while(1){
        printf("Enter string");
    
fgets(input,100,stdin);
if(strcmp(input,"exit\n")==0)break;
fputs(input,fptr);
    };
    fclose(fptr);
    
}