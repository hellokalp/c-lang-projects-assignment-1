#include<stdio.h>

int main()

{
    
    float s1,s2,s3,total,avg;
    
    printf("Marks of s1: ");
    scanf("%f" , &s1);
    
    printf("Marks of s2: ");
    scanf("%f" , &s2);
    
    printf("Marks of s3: ");
    scanf("%f" , &s3);
    
    total=s1+s2+s3;
    avg=total/3;
    
    printf("TOTAL=%.2f\n",total);
    printf("AVG=%.2f",avg);
    
    
    
}
