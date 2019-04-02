#include <stdio.h>

char Encode(int y);
char Decode(int y);

int main()
{
    char choice;
    char x[255];
printf("enter word to be encrypted or decrypted");
scanf("%s", &*x);
    
    
    do
    {printf("Decode(1) or Encode(2)\n");
    scanf("%s", &choice);
    
   switch (choice){
    case 1  : printf("%d", Decode(x));
                break;
    case 2  : printf("%d", Encode(x));
                break;
    default : (printf("please insert 1 or 2\n"));
    

}

} while ("choice =! 2 || choice =! 1");

    
    return 0; 
}

char Encode(char y)
{
    y=0
    
    return y;
}

char Decode(char y)
{
    return y;
}