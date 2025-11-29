// printing evennumbers using recurtion
#include<stdio.h>
void printevenNumbers(int n){
    if (n==0) return;
    printevenNumbers(n-1);
    if(n%2==0){
        printf("%d\n",n);
    }
}
    void main(){
        int num;
        printf("enter the number of even numbers to be printed: ");
        scanf("%d",&num);
        printevenNumbers(num);
    }