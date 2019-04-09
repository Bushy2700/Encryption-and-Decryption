#include <stdio.h>
#include <string.h>

int Encode();
int Decode();

int main()
{
    int choice; //whether the word is going to be encrypted or decrypted
    int key;  
    char word[1024]; //the word that needs to be encrypted or decrypted
    char tempword;  //temporarily saving the word outside the array
    
    printf("enter word to be encrypted or decrypted\n");
    scanf("%s", &tempword); //trying to save it in a array 
    
    word[1024] = tempword;  //transfering to the array
    
    printf("%d\n", word[1]);
    
    printf("what is the key?\n");  //key input
    scanf("%d", &key);
    
    do
    {printf("Decode(1) or Encode(2)\n"); //the decode or encode choice
    scanf("%d", &choice);
    
    switch (choice) //making sure the choice is 1 or 2
    { 
        case 1  : printf("%d", Decode(word));
                return 0;
        case 2  : printf("%d", Encode(word));
                return 0;
        default : (printf("please insert 1 or 2\n"));
    }

    }   while ("choice =! 2 || choice =! 1");

    
    return 0; 
}

int Encode(int y)
{
    printf("Encode\n");
    y=0;
    
    return y;
}

int Decode(int y)
{
    printf("Decode\n");
    y = 0;
    return y;
}