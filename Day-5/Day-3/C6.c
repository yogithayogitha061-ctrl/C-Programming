// reverse a number
#include<stdio.h>
int main(){
    int num,rev=0, digit;
    printf("enter the number: ");
    scanf("%d", &num);
    int original = num;// users input
    for( ;num !=0;num= num/10) // condition initially rev=0 
    {
        digit = num% 10;// take over the last digit in the input
        rev = rev *10+ digit;
    }
    printf("original number =%d\n",original);
    printf("reversed number=%d\n",rev);
    return 0;
}
    