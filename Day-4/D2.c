// functions to find factorial
#include<stdio.h>
int factorial(int n){
    int fact =1;
    for (int i=1;i<=n;i++)
    fact *= i;
    return fact;
}
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("factorial=%d\n",factorial(num));
    return 0;
}