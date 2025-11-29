// change the values using pointers
#include<stdio.h>
int main(){
    int a=50;
    int *p=&a;
    *p=60;
    printf("a=%d",a);
    return 0;
}