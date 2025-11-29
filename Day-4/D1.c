     // finding the square of the number
     #include<stdio.h>
     int squarenumber(int n)
     {
        return n*n;
    }
    int main(){
        int num;
        printf("enter the number: ");
        scanf("%d",&num);
        printf("square=%d\n",squarenumber(num));
        return 0;
    }  
     