#include<stdio.h>
#include<string.h>
void main(){
    char a[]="Aayush";
    char b[45];
    strcpy(b,a);
    printf("Copied: %s",b);
     char s[] = "Hello";
    printf("Reversed string = %s", strrev(s));
}