#include<stdio.h>

int main() {
    
    float a,b;
    
    printf("Enter Two Numbers");
    
    scanf("%f%f",&a,&b);
    
    printf("Addition=%.2f\n",a+b);
    printf("Subtraction=%.2f\n",a-b);
    printf("Multiplication=%.2f\n",a*b);
    
    if (b!=0)
        printf("Division=%.2f\n",a/b);
    else
        printf("Division is not possible");
    
    
}
