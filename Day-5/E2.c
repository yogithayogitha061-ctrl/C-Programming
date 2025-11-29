// pointer storing address of another pointer
#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int **pp=&p;
    printf("a=%d\n",a);
    printf("p=%d\n",*p);
    printf("**PP=%d\n",**pp);
    return 0;
}