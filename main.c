#include <stdio.h>

int Encode(int y);
int Decode(int y);

int main()
{
    int choice; //whether the word is going to be encrypted or decrypted
    char word[255]; //the word that needs to be encrypted or decrypted
printf("enter word to be encrypted or decrypted");
scanf("%s", &*word); //trying to save it in a array 
    
    
    do
    {printf("Decode(1) or Encode(2)\n"); //the decode or enode choice
    scanf("%d", &choice);
    
   switch (choice){
    case 1  : printf("%d", Decode(*word));
                break;
    case 2  : printf("%d", Encode(*word));
                break;
    default : (printf("please insert 1 or 2\n"));
    

}

} while ("choice =! 2 || choice =! 1");

    
    return 0; 
}

int Encode(int y)
{
    y=0;
    
    return y;
}

int Decode(int y)
{
    y = 0;
    return y;
}