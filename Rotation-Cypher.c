 #include <stdio.h>
#include <string.h>

int Encryption(int letter, int key);
int Decryption(int letter, int key);

void Rotation(void)
{
    int UnknownDecryptionNumber;  // The counter that is used to brute force the roation cypher
    int choice; //whether the word is going to be encrypted or decrypted
    int key; // a number between 1 and 25 that will change the sentence
    char Word[1024]; //the word that needs to be encrypted or decrypted
    int Number = 0; // The general Counter used whenever a counter is needed
    FILE *Message;
    FILE *Output;
    
    Output = fopen("Output", "w");
    printf("enter word to be encrypted or decrypted in Message file\n"); 
    
    printf("Enter the key (must be between 1 and 25)\n");  //key input
    do
    {
        scanf("%d", &key);}
    while (key < 1  || key > 25); //Making sure the key is between 1 and 25
    
    Message = fopen("Message", "r");
    
    while (Number < 1024) // increasing the array number so the message on the file can be read
    {
        fscanf(Message, "%c", &Word[Number]);
        Number++;
    }

    for (Number = 0; Word[Number] != 0; Number++)
        //fprintf(Output ,"%d\n", (int)Word[Number]);  //this was used to observe the numbers that was printed due to the code sometimes printing out characters that are negative  
        if ((int)Word[Number + 1] < 0) //Making sure the number isnt negaive, if it is it changes the number to 0
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
                fprintf(Output,"\n\n---------------------------------------------------------------------\n\n%s", Word);}// prints out all possible ans
                return;
                    }
            else if (choice == 0)
                {for(Number = 0; Number < 1024; Number++)
                    Word[Number] = Decryption((int)Word[Number], key);
                fprintf(Output,"%s", Word);
                return;}
            }

            

        else if (choice == 1) {
            for (Number = 0; Number < 1024; Number++){
                Word[Number] = Encryption((int)Word[Number], key);
                }
            fprintf(Output,"%s", Word);
            return;
            }
        else
        (printf("please insert 1(Decode) or 2(Encode)\n"));
       

}while (choice != 0 && choice !=1 );
return; 
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



