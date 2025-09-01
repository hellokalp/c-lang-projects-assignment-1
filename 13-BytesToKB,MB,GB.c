#include<stdio.h>

int main() {
    
    float a,KB,MB,GB;
    
    printf("Enter Bytes to convert into KB,MB,GB :");
    
    scanf("%f",&a);
   
    KB=a/1024;
    MB=KB/1024;
    printf("KB=%.2f\n",a/1024);
   
    printf("MB=%.6f\n",KB/1024);
    printf("GB=%.8f\n",MB/1024);
    
    
}