/*
 * Chapter 9 - Program 1 - Programming in C 
 * Function to concatenate two character arrays
 */
 
#include <stdio.h>
 
void concat(char result[], const char str1[], int n1, const char str2[], int n2);

int main(void)
{
    const char s1[5] = {'T', 'e', 's', 't', ' '};
    const char s2[6] = {'w', 'o', 'r', 'k', 's'};
    char s3[11];
    
    concat(s3, s1, 5, s2, 6);
    
    for (int i = 0; i < 11; ++i)
    {
        printf("%c", s3[i]);
    }
    printf("\n");
    
    return 0;
}


void concat(char result[], const char str1[], int n1, const char str2[], int n2)
{
    for (int i = 0; i < n1; ++i)
    {
        result[i] = str1[i];
    }
    
    for (int j = 0; j < n2; ++j)
    {
        result[n1 + j] = str2[j];
    }
}