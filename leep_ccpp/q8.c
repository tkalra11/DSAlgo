#include <stdio.h>
int main(int argc, char const *argv[])
{
        char ch;
        printf("Enter a character : ");
        scanf("%c",&ch);
        switch (ch)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':printf("Vowel");
        break;
        default:printf("Consonant");
        }        
        return 0;
}