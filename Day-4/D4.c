//to check weither the number is amstrong number or Not
#include<stdio.h>
int count_digits(int n){
    int count=0;
    while (n!=0){
        count++;
        n/=10;
    }
    return count;
}
int power(int base,int exp){
    int result =1;
    for (int i=1;i<=exp;i++)
        result*=base;
    return result;
}
int isAmstrong(int n){
    int digits= count_digits(n);
    int sum=0, temp=n;
    while(temp!=0){
        int digit =temp%10;
        sum+=power(digit, digits);
        temp/=10;
    }
    return sum==n;
}
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if (isAmstrong(num))
       printf("Amstrong Number\n");
    else
        printf("not Amstrong\n");
    return 0;
}