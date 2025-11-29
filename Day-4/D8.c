#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="hello";
    char str2[20]="world";
    printf("length of str1=%u\n",strlen(str1));
    printf("length of str2=%u\n",strlen(str2));
    strcpy(str1, str2);
    printf("after copying:%s\n",str1);
    
    return 0;
}