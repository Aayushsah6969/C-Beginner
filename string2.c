#include<stdio.h>
#include<string.h>
void main(){
    char a[]="Aayush";
    char b[]=" Kumar";
    strcat(a,b);
    printf("String = %s\n",a);
    int len = strlen(a);
    printf("%d\n",len);
    int cmp = strcmp(a,b);
    printf("%d\n",cmp);
}