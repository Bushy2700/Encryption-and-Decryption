#include <stdio.h>

int Encode(char word[]);
int Decode(char word[]);

int main()
{
    char choice;

    do
    {printf("Decode(1) or Encode(2)\n");
    scanf("%s", &choice);
    
   switch (choice){
    case 1  : (printf("%d", Decode(0))); 
    case 2  : (printf("%d", Encode(0)));
    default : (printf("please insert 1 or 2\n"));
    

}

} while ("choice =! 2 || choice =! 1");

    
    return 0; 
}

int Encode(word[])
{
    
    
    
}