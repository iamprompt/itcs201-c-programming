#include <stdio.h>

#define MAX 20

int isPalindrome(char *word);

int main()
{
    char word[MAX];
    scanf("%s", word);
    //printf("INPUT : %s\n", word); // Check Input from scanf

    int Palin = isPalindrome(word);

    //printf("P? %d\n", Palin);

    switch (Palin)
    {
    case 0:
        printf("%s is not a palindrome\n", word);
        break;
    
    case 1:
        printf("%s is a palindrome\n", word);
    
    default:
        break;
    }

    return 0;
}

int isPalindrome(char *word) // Return 1 / 0
{
    //printf("IN FUNC : %s\n", word); // Check Input from parameters

    /* Check Word Len */
    int i = 0;
    int wordlen = 0;
    while (word[i] != '\0')
    {
        wordlen++;
        i++;
    }
    //printf("%d // %d\n", wordlen, wordlen % 2); // Print Word Len

    /* Check Palin */
    int checkPalin = 0;
    int wordArr = wordlen - 1;

    for (int forward = 0; forward < wordlen / 2; forward++)
    {
        //printf("Check %c with %c\n", word[forward], word[wordArr - forward]);
        if (word[forward] == word[wordArr - forward])
            checkPalin++;
        else
            return 0;
    }

    /* Return Check */
    return (checkPalin == wordlen / 2) ? 1 : 0;
}