#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    //printf("%d\n",ptr);
    //printf("%d\n",*ptr);
    for(int i =1; i<=5; i++){
        printf("Enter for %d: ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=1;i<=5; i++){
        printf("%d\t",ptr[i]);
    }
    return 0;
}