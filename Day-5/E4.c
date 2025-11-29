// pointers to functions
// used for swaping , modifying values inside the function
#include<stdio.h>
void change (int *X){
    *X=30;
}
int main(){
    int a=10;
    change(&a);
    printf("a=%d",a);
    return 0;
}