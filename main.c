#include <stdio.h>
#include <string.h>

int Encryption(int letter, int key);
int Decryption(int letter, int key);

int main()
{
    int UnknownDecryptionNumber;
    int choice; //whether the word is going to be encrypted or decrypted
    int key;  
    char Word[1024]; //the word that needs to be encrypted or decrypted
    FILE *Message;
    int Number = 0;
    FILE* Output;
    
    Output = fopen("Output", "w");
    printf("enter word to be encrypted or decrypted in Message file\n"); 
    
    printf("what is the key?\n");  //key input
    scanf("%d", &key);
    
    Message = fopen("Message", "r");
    
    while (Number < 1024)
    {
        fscanf(Message, "%c", &Word[Number]);
        Number++;
    }

    for (Number = 0; Word[Number] != 0; Number++)
        //fprintf(Output ,"%d\n", (int)Word[Number]);
        if ((int)Word[Number + 1] < 0)
            Word[Number + 1] = 0;
    do
    {
        printf("Decode(0) or Encode(1)\n"); //the decode or encode choice
        scanf("%d", &choice);
        Number = 0;
        if (choice == 0) 
            {printf("Unknown key(1) or Known key(0)\n");
            scanf("%d", &choice);
            if (choice == 1)
                {key = 1;
                for (UnknownDecryptionNumber = 0; UnknownDecryptionNumber < 26; UnknownDecryptionNumber++)
                    {for(Number = 0; Number < 1024; Number++){
                    Word[Number] = Decryption((int)Word[Number], key);
                    }
                fprintf(Output,"\n\n---------------------------------------------------------------------\n\n%s", Word);}
                return 0;
                }
            else if (choice == 1)
                {for(Number = 0; Number < 1024; Number++)
                    Word[Number] = Decryption((int)Word[Number], key);
                fprintf(Output,"%s", Word);
                return 0;}
            }


        else if (choice == 1) {
            for (Number = 0; Number < 1024; Number++){
                Word[Number] = Encryption((int)Word[Number], key);
                }
            fprintf(Output,"%s", Word);
            return 0;
            }
        else
        (printf("please insert 1(Decode) or 2(Encode)\n"));
        
    }   while ("choice =! 2 && choice =! 1");

    
    
    return 0; 
}

int Encryption(int letter, int key)
{
    if (letter < 65)
        return letter;
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

int Decryption(int letter, int key)
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



