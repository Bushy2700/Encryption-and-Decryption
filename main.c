#include <stdio.h>
#include <string.h>

int Encryption(int Message, int key);
int Decryption(int Message, int key);

int main()
{
    char choice; //whether the word is going to be encrypted or decrypted
    int key;  
    char word[1024]; //the word that needs to be encrypted or decrypted
    FILE *Message;
    int Number = 0;
    
    printf("enter word to be encrypted or decrypted in Message file\n"); 
    
    printf("what is the key?\n");  //key input
    scanf("%d", &key);
    
    Message = fopen("Message", "r");
    
    while (Number < 1024)
    {
        fscanf(Message, "%c", &word[Number]);
        Number++;
    }

    
    do
    {
        printf("Decode or Encode\n"); //the decode or encode choice
        scanf("%s", &choice);
    
        if (choice == "Decode") {
            printf("%s", Decryption((int)Message, key));
                return 0;}
        else if (choice == "Encode") {
        printf("%d", Encryption((int)Message, key));
                return 0;}
        else
        (printf("please insert 1(Decode) or 2(Encode)\n"));
        
        }   while ("choice =! 2 || choice =! 1");

    
    
    return 0; 
}

int Encryption(int Message, int key)
{
    if ( < 65)
        
    else if (letter > 90)
        return letter;

    letter = letter + key;

    if (letter < 65)
        return (letter + 26);
    else if (letter > 90)
        return (letter - 26);
    else 
        return letter;
}


int Decryption(int Message, int key)
{
    if (letter < 65)
        return letter;
    else if (letter > 90)
        return letter;

    letter = letter - key;

    if (letter < 65)
        return (letter + 26);
    else if (letter > 90)
        return (letter - 26);
    else 
        return letter;
}

