/*
 * Chapter 9 - Program 3 - Programming in C 
 * Function to concatenate two character arrays - With varying size arrays
 */
 
#include <stdio.h>
 
void concat(char result[], const char str1[], const char str2[]);

int main(void)
{
    const char s1[] = {"Test "};
    const char s2[] = {"works."};
    char s3[] = "\0";
    
    concat(s3, s1, s2);
    printf("%s\n", s3);
    
    return 0;
}


void concat(char result[], const char str1[], const char str2[])
{
    int i, j;
    
    for (i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }
    
    for (j = 0; str2[j] != '\0'; ++j)
    {
        result[i + j] = str2[j];
    }
    
    result[i + j] = '\0';
}