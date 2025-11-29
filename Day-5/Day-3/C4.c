#include<stdio.h>
int main(){
    int n, fact= 1; // initiating the data type
    printf("enter the number: "); // asking the user 
    scanf("%d",&n); // taking user input
    for(int i=1; i<=n; i++) // start point from 1 and number should be 
    { 
        fact *=i; //logic for fact of number
    }
    printf("factorial=%d",fact);

    return 0;
}