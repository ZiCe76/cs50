#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2 && isdigit(*argv[1]))
    {
        
        int k = atoi(argv[1]);
        string s = get_string("plaintext: ");

        // Print the ciphertext
        printf("ciphertext: ");
        for (int i = 0, n = strlen(s) ; i < n; i++)
        {
            // checking if it is in lowercase 97 = a to 112 = z and if it + 13
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", (((s[i] - 'a') + k) % 26) + 'a'); 
            }
            // if it in uppercase
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", (((s[i] - 'A') + k) % 26) + 'A');
            }  
            else
            {
                printf("%c", s[i]);
            }
        }
    printf("\n");
    return 0;
    }
    
    else
    {
        printf("Usage: ./caesar k\n");
        return 1;

    }
}

