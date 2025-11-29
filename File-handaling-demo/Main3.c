#include<stdio.h>
int main(){
    FILE*fptr;
    fptr = fopen("newFile.txt", "w");
    fputs("I love Dogs\n",fptr);
    fputs("chasing clouds in the blue ocean0",fptr);
    fclose(fptr);
    return 0;
}