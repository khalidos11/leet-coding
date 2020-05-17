/*
  Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

  Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

  The order of output does not matter.
*/

#include <string.h>

int findSum(char *string, int substringLength);

int* findAnagrams(char * s, char * p, int* returnSize){
    if (s == NULL) {*returnSize = 0; return NULL;}
    
    int substringLength = strlen(p), index = 0, substringSum = findSum(p, substringLength), stringLength = strlen(s);
    int* returnArray = (int *)malloc(stringLength * sizeof(int));
    char* firstCharacter = s;
    
    for (int i = 0; i < stringLength - substringLength + 1; i++, s++)
    {
        int currentSum = findSum(s, substringLength);
        if (currentSum == substringSum)
        {
            returnArray[index] = i;
            index++;
        }
    }
    *returnSize = index;
    return returnArray;
}

int primes[26] = {2, 5, 11, 17, 23, 31, 41, 47, 59, 71, 79, 89, 101, 107, 113, 131, 139, 151, 163, 173, 181, 191, 197, 211, 227, 233};
int findSum(char *string, int substringLength)
{
    int sum = 0;
    for (int i = 0; i < substringLength; i++)
    {
        sum += primes[*(string + i) - 'a'];
    }
    return sum;
}
