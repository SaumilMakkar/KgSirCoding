#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("hello.txt","r");
    if(fptr==NULL){
        printf("file could not be opened\n");
    }
    int temp;
    int sum=0;
    int read_status;
    while(fscanf(fptr,"%d",&temp)==1){
sum=sum+temp;
    }
    fclose(fptr);
    fptr=fopen("hello.txt","w");
    fprintf(fptr,"%d",sum);
      fclose(fptr);


}