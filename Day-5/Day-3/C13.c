// Arguments with return values (most used one)
#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int result=add (28,10);
    printf("sum=%d",result);
    return 0;
}