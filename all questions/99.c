#include<stdio.h>
int main()
{
    char filename[100];
    printf("Enter file name");
    scanf("%s",filename);
    FILE *fptr;
    fptr=fopen(filename,"r");
    if(fptr!=NULL){
        printf(" %s file was opened",filename);
    }
else printf("file was not opened");
 return 0;
}