#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    // Only accepts one argument as the key to use for the substitution.
    if (argc != 2){
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // Check to make sure the key is 26 characters.
    if (strlen(key) > 26 || strlen(key) < 26){
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    // Check for repeated characters in key.
    int len = strlen(key);
    bool invalid = false;
    for(int i = 0; i < len; i++){

    if (isalpha(key[i]) == false){
        printf("Key cannot contain non alphabet characters.\n");
        return 1;
    }
    }
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if (key[i] == key[j] && i != j){
                printf("Key must not contain repeated characters.\n");
                invalid = true;
                break;
            }
            }
            if (invalid == true)
            return 1;
        }


    string plainText = get_string("Enter your plaintext: \n");
    string cipherText = plainText;
    printf("Ciphertext: %s\n", cipherText);

    // Loop through plaintext to convert to cypher text.
    for (int i = 0; i < strlen(plainText); i++){
        if (isalpha(plainText[i])){
            // check if uppercase then substitute
            if (isupper(plainText[i])){
                char c;
                int x = plainText[i] - 65;
                c = key[x];
                c = toupper(c);
                cipherText[i] = c;
            }
            // check if lowercase then substitute
            if (islower(plainText[i])){
                char c;
                int x = plainText[i] - 97;
                c = key[x];
                c = tolower(c);
                cipherText[i] = c;
            }
        }
        else{
            char y;
            y = plainText[i];
            cipherText[i] = y;
        }
    }
    printf("ciphertext: %s\n", cipherText);


}
