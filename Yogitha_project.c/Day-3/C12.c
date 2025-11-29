//No argument with return value
#include<stdio.h>
int getNumber(){
    return 10; //returns value to main()

}
int main(){
    int x=getNumber();
    printf("number=%d",x);
    return 0;
}
