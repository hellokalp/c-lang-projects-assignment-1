#include<stdio.h>

int main() {
    
    float a;
    
    printf("Enter Bytes to convert into KB,MB,GB :");
    
    scanf("%f",&a);
    
    printf("KB=%.2f\n",a/1024);
    printf("MB=%.2f\n",a/2048);
    printf("GB=%.2f\n",a/4096);
    
    
}
