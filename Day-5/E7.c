// print adddress and value using pointers
#include<stdio.h>
int main(){
    int a=30;
    int *p=&a;
    printf("p=%u\n",p);
    p++;
    printf("p++=%u\n",p);
    return 0;
}