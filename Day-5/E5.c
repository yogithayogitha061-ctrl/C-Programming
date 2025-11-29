// swaping 2 numbers using pointer ( call by reference)
#include<stdio.h>
void swap(int *x,int *y){
    int temp = *x;
    *x =*y;
    *y=temp;
}
int main(){
    int a=200, b=100;
    swap(&a ,&b);
    printf("a=%d, b=%d",a,b);
    return 0;
}