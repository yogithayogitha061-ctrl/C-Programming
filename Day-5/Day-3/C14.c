#include<stdio.h>
int product(int a, int b,int c) {
    return a*b*c;
}

int main(){
    int result=product (12,12,12);
    printf("product=%d",result);
    return 0;
}