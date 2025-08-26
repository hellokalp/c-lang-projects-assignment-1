#include<stdio.h>

int main()

{
    
    float a,b,c;
    
    printf("Enter a: ");
    scanf("%f",&a);
    
    printf("Enter b: ");
    scanf("%f",&b);
    
    
    c=a;//temp
    a=b;
    b=c;
    
    printf("values after swap\n");
    printf("a=%.0f" , a);
    printf("\nb=%.0f" , b);
    
    
    
}
