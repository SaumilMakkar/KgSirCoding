#include<stdio.h>
typedef struct Car{
    char make[25];
    char model[25];
    int year;
    char color[15];
}Car;
void print_car(Car* car){
    printf("This %s colored car was purcahsed in %d year and is made by %s company");
}
int main()
{
    
 return 0;
}