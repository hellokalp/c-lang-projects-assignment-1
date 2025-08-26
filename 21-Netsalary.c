#include <stdio.h>
int main()

{
    float g,a,d,net;
    
    printf("Enter Gross Value: ");
    scanf("%f" , &g);
    
    
    
    a=g*0.1;
    d=g*3/100;
    
    net=g+a-d;
    printf("Net Salary=%.2f",net);
    
    
    
    
    
}
