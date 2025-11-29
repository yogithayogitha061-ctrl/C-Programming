#include<stdio.h>
int main(){
    FILE*fptr;
    fptr = fopen("newFile.txt", "w");
    fputs("I love singing\n",fptr);
    fputs("Mehabhoba mei tere mehabhoba ,",fptr);
    fputs("Mehabhoba mei tere mehabhoba .",fptr);
    fclose(fptr);
    return 0;
}