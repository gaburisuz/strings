/***************************************************
** Written By...: Gabriella Uriarte               **
** Date Written.: 09/21/2022                      **
** Purpopse.....: Playing With Strings Assignment **
***************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char choice = 'Y';
    while (choice == 'Y')
    {
        fflush(stdin);
        printf("Enter a string of 100 charactrs of less: ");
        char myString[100];
        //string input
        scanf("%s", myString);
        fflush(stdin);
        printf("\nThe string you entered is below.....\n");
        printf("\n\t\t%s", myString);
        //string forward
        printf("\n\nForward: ");
        printf("%s", myString);

        int lenString = 0;
        while (myString[lenString] != '\0')
            lenString++;
        //string backward
        printf("\n\nBackward: ");
        for (int i = lenString - 1; i >= 0; i--)
        {
            printf("%c", myString[i]);
        }
        //string vertical
        printf("\n\nVertical: \n");
        for (int i = 0; myString[i] != '\0'; i++)
        {
            printf("\t\t\t%c\n", myString[i]);
        }

        printf("\n");
        //string triangle
        int charCount = 0;
        int k = 1;
        for (int i = k; charCount < lenString; i++)
        {
            for (int j = 1; (charCount < lenString) && (j <= k); j++)
            {
                printf("%c", myString[charCount]);
                charCount++;
            }
            printf("\n");
            k++;
        }
        printf("\nBy the way, the string had %d characters in it.", lenString);
        printf("\nWould you like to enter another string (Y/N)?");
        scanf("%c", &choice);

    }
    return 0;
}
       
            