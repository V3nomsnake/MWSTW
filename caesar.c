// Diamond Dogs depend on covert operations. Encryption and Decryption are part and parcel of daily life.
// We must teach Miller how to solve simple encryption so his dumbass can decrypt easy ciphers sent by either the Boss or Cipher himself.
// Return value should be 1, this will ensure that Miller did not mess the code up. Huey tried his best to hide this information from us but I (Ocelot) beat him up as always and got him to squeal.

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{


// checking
    if (argc == 2 && isdigit(*argv[1]))

    {

        int k = atoi(argv[1]); // get the ceasar KEY value and then convert into integar

        string s = get_string("plaintext: "); // get text
        printf("ciphertext: "); // printing the cipher

// iterating plain text letter by letter

        for (int i = 0, n = strlen(s) ; i < n; i++)
        {
            // checking if it is lowercase 97 = a to 112 = z and 13 chars long.
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", (((s[i] - 'a') + k) % 26) + 'a'); // printing lowercase with key
            } // if it it between uppercase A and C
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", (((s[i] - 'A') + k) % 26) + 'A'); // printing uppercase with key
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