/*
 * Chaper 9 - Program 5 - Programming in C 
 * Program to illustrate the %s scanf format characters
 */
 
#include <stdio.h>

int main(void)
{
    char s1[]="\0", s2[81], s3[81];
    
    printf("Enter text: ");
    scanf("%s%s%s", s1, s2, s3);
    
    printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
    
    return 0;
}