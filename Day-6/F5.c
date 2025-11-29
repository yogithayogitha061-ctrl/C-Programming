// sum of digits using recurtions
#include<stdio.h>
int sumOfNum(int num){
    if (num==0)return 0;
    return num + sumOfNum(num-1);
}
void main(){
    int n;
    printf("enter the number to find the sum of the numbers: ");
    scanf("%d",&n);
    printf("Sum of 0 to %d is:%d\n", n,sumOfNum(n));
}