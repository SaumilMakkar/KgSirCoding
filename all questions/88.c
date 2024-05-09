#include<stdio.h>
#include<string.h>

void input_book(char authors[],char titles[],float prices){
    printf("Enter title\n");
    fgets(titles,100,stdin);
    titles[strcspn(titles,"\n")]=0;
    printf("Enter author name\n");
    fgets(authors,100,stdin);
    authors[strcspn(authors,"\n")]=0;
   
    printf("Enter price\n");
    scanf("%f",&prices);
    while(getchar()!='\n');
}
print_book(char authors[],char titles[],float prices ){
    printf("%s is written by %s and was sold for %f",titles,authors,prices);
}
int main()
{
char titles[3][100];
char authors[3][100];
float prices[3];
for(int i=0;i<3;i++){
    input_book(authors[i],titles[i],prices[i]);
}
for(int i=0;i<3;i++){
    print_book(authors[i],titles[i],prices[i]);
}

 return 0;
}