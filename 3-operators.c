#include<stdio.h>
int main(){
    int a = 3;
    int b = 4;
    int c = a+b;
    // printf("%d",c);
    printf("%d + %d = %d\n",a,b,c);
    int d = a*b;
    printf("%d\n",d);
    float e = a/b;
    printf("%f\n",e);
    int f = a%b;
    printf("%d\n",f);
    if(d>a){
        printf("%d = d is greater than %d = a",d,a);
    }
    else{
        printf("it is less");
    }
    return 0;
}

