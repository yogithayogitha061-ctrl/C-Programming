// stack using array
#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
void push(int value){
    if (top ==SIZE-1){
        printf("stack overflow!\n");
        return ;
    }
    top++;
    stack[top]=value;
}  
int pop(){
    if(top==-1){
    printf("stack Underflow!\n");
    return -1;
}
int value=stack [top];
top--;
return value;
}
int peek(){
    if (top==-1){
        printf("stack is empty!\n");
        return -1;
    }
    return stack[top];
}
void display(){
    if (top==-1){
        printf("stack is empty!\n");
        return ;
    }
    printf("stack elements: ");
    for(int i=0;i<=top;i++){
        printf("%d",stack[i]);
    }
    printf("\n");
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    printf("popped:%d\n",pop());
    printf("top element:%d\n",peek());
    display();     -+-+-+-+-+-++
    return 0;
}
