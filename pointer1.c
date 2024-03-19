#include<stdio.h>
int main(){
    int age = 20;
    int *ptr = &age;
    int value = *ptr;
    int adr = ptr;
    printf("%d\n",age);
    printf("%d\n",ptr);
    printf("%d\n",value);
    printf("%d\n",adr);
    printf("%p\n",&age);
    printf("%d\n",*(&age));
    printf("%p\n",ptr);
    printf("%u\n",ptr);
    printf("%u\n",&age);
    printf("%u\n",&ptr);
    return 0;

}