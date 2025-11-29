#include <stdio.h> 
#define SIZE 5 
int stack[SIZE]; 
int top = -1; 
void push(int value) { 
    if (top == SIZE - 1) { 
        printf("Stack Overflow!\n"); 
        return; 
    } 
    top++; 
    stack[top] = value; 
} 
 
int pop() { 
    if (top == -1) { 
        printf("Stack Underflow!\n"); 
        return -1; 
    } 
    int value = stack[top]; 
    top--; 
    return value; 
} 
int peek() { 
    if (top == -1) { 
        printf("Stack is Empty!\n"); 
        return -1; 
    } 
    return stack[top]; 
} 
 
void display() { 
    if (top == -1) { 
        printf("Stack is Empty!\n"); 
        return; 
    } 
    printf("Stack elements: "); 
    for (int i = 0; i <= top; i++) { 
        printf("%d ", stack[i]); 
    } 
    printf("\n"); 
} 
int main() { 
    push(10); 
    push(20); 
    push(30); 
 
    display(); 
 
    printf("Popped: %d\n", pop()); 
    printf("Top element: %d\n", peek()); 
 
    display(); 
    return 0; 
}