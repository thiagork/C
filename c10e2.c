/*
 * Chapter 10 - Exercise 2 - Programming in C 
 * Program to inser a new entry into a linked list
 */
 
#include <stdio.h>

void insertEntry(struct entry *input, struct entry *location);


int main(void)
{
    struct entry
    {
        int value;
        struct entry *next;
    };
    struct entry n1, n2, n3, n4, n5;
    struct entry *ptr = &elementNumber;
    int elementNumber;
    
    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;
    
    n3.value = 300;
    n3.next = &n4;
    
    n4.value = 400;
    n4.next = &n5;
    
    n5.value = 500;
    n5.next = (struct entry *) 0;
    
    printf("Type the number of the element you want to insert: ");
    scanf("%d", &elementNumber);
    
    insertEntry(ptr, entry + )
    
}