// calculating simple intrest
#include<stdio.h>
float simple_intrest(float p,float t,float r){
    return (p*t*r)/100;

}
int main(){
    float p,t,r;
    printf("enter p,t,r: ");
    scanf("%f %f %f",&p,&t, &r);
    printf("simple_intrest=%.2f\n", simple_intrest(p,t,r));
    return 0;
}