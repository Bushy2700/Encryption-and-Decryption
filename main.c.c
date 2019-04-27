//To run program go to terminal and write (at the end of each line press the enter key)
//cd Encryption-and-Decryption
// gcc main.c.c Substitution-Cypher.c Rotation-Cypher.c
// ./a.out

#include <stdio.h>

void Substitution(void);
void Rotation(void);

int main(void)
{
    int Choice;
    printf("What encryption/decryption type \nRotation(1) or Substitution(0)\n");
    do {
    scanf("%d", &Choice);
    
    if (Choice == 0)
        {Substitution(); // runs through the file Substitution-Cypher.c
        return 0;}
    
    else if (Choice == 1)
        {Rotation(); // runs through the file Rotation-Cypher.c
        return 0;}

    else printf("Enter 0 or 1\n");
    
    }while (Choice != 0 || Choice != 1); // if 1 or 0 is not chosen the file will coninue in this loop until 1 or 0 is chosen

return 0;
}