/*
 * Chapter 9 - Exercise 10 - Programming in C 
 * Function to sort a dictionary alphabeticaly
 */

#include <stdio.h>

struct entry
{
    char word[15];
    char definition[50];
};

void dictionarySort(const struct entry dictionary[]);
int compareStrings(const char s1[], const char s2[]);


int main(void)
{
    const struct entry dictionary[100] = 
    {{"acumen", "a mentally sharp; keen"},
     {"aerie", "a high nest"},
     {"affix", "to append; attach"},
     {"aardvark", "a burrowing African mammal"},
     {"abyss", "a bottomless pit"},
     {"agar", "a jelly made from seaweed"},
     {"ahoy", "a nautical call of greeting"},
     {"aigrette", "an ornamental cluster of feathers"},
     {"addle", "to become confused"},
     {"ajar", "partionally opened"}};
     
     dictionarySort(dictionary);
     
     return 0;
}


void dictionarySort(const struct entry dictionary[])
{
    struct entry buffer[100];
    struct entry sortedDictionary[100];
    
    for (int i = 0; i < 100; ++i)
    {
        buffer[i] = dictionary[i];
        sortedDictionary[i] = dictionary[i];
    }
        
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (compareStrings(sortedDictionary[i].word, sortedDictionary[j].word) == 1)
            {
                buffer[i] = sortedDictionary[i];
                sortedDictionary[i] = sortedDictionary[j];
                sortedDictionary[j] = buffer[i];
            }
        }
    }
    
    for (int i = 0; i < 10; ++i)
    {
        printf("%s - %s\n", sortedDictionary[i].word, sortedDictionary[i].definition);
    }
}


int compareStrings(const char s1[], const char s2[])
{
    int i = 0, answer;
    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        ++i;
    }
    
    if (s1[i] < s2[i])
    {
        answer = -1;
    }
    else if (s1[i] == s2[i])
    {
        answer = 0;
    }
    else
    {
        answer = 1;   
    }
    
    return (answer);
}