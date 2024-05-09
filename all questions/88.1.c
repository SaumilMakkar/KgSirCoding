#include<stdio.h>
#include<string.h>
typedef struct book{
    char titles[100];
    char authors[50];
    float prices;

}book;
void input_book(book *book1){
    printf("Enter title\n");
    fgets(book1->titles,100,stdin);
    book1->titles[strcspn(book1->titles,"\n")]=0;
    printf("Enter author name\n");
    fgets(book1->authors,100,stdin);
    book1->authors[strcspn(book1->authors,"\n")]=0;
   
    printf("Enter price\n");
    scanf("%f",&(book1->prices));
    while(getchar()!='\n');
}
print_book(book* book1 ){
    printf("%s is written by %s and was sold for %f",book1->titles,book1->authors,book1->prices);
}
int main()
{
book books[3];
for(int i=0;i<3;i++){
    input_book(&books[i]);
}
for(int i=0;i<3;i++){
    print_book(&books[i]);
}

 return 0;
}