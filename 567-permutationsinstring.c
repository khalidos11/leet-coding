/*
  Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first       string's permutations is the substring of the second string.
*/

int findSum(char *string, int substringLength);
bool checkInclusion(char * s1, char * s2){
    int substringLength = strlen(s1), substringSum = findSum(s1, substringLength);
    int stringLength = strlen(s2);
    if (stringLength < substringLength) return false;
    for (int i = 0; i < stringLength - substringLength + 1; i++, s2++)
    {
        int currentSum = findSum(s2, substringLength);
        if (currentSum == substringSum) return true;
    }
    return false;
}

int primes[26] = {2, 599, 23, 809, 11, 47, 3089, 853, 337, 1013, 13, 107, 787, 7, 383, 151, 1493, 947, 877, 2141, 431, 211, 59, 911, 23099, 307};
int findSum(char *string, int substringLength)
{
    int sum = 0;
    for (int i = 0; i < substringLength; i++)
    {
        sum += primes[*(string + i) - 'a'];
    }
    return sum;
}
