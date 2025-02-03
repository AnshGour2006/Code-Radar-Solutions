#include <stdio.h>
int main() {
    char name[100];
    int age;
    char hobby[100];
    printf("Enter your name: ");
    scanf("%99[^\n]",name);

    printf("Enter your age: ");
    scanf("%d",&age);
    
    getchar();

    printf("Enter your favourite hobby: ");
    scanf("%99[^\n]",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
    
}