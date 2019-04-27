#include <stdio.h>

int SubstitutionEncryption(char *Key, int Letter);
int SubstitutionDecryption(char *Key, int Letter);

void Substitution(void)
{
    int Choice;
    char Continue; // just used as a way so the program stops after the first couple of printf so the person has a chance to enter the key and message into each file
    char Key[26]; // the array to store the key
    char Message[1024]; //store the message
    int Number; // counter used throughout the program
    int Counter = 0; // used to add the characters in the key to make sure the key is proper
    FILE *InputMessage;
    FILE *OutputMessage;
    FILE *KeyStart; //used to access the key 
    
    OutputMessage = fopen("Output", "w");
    
    printf("Please write key in Substitution Key file\nAfter key is written in file press enter in the terminal\n");
    scanf("%c", &Continue);

    KeyStart = fopen("Substitution Key", "r");
    
    printf("Insert message into the Message file\nAfter message is written if file press enter key in terminal\n");
    scanf("%c", &Continue);

    
    InputMessage = fopen("Message", "r");
    
    for (Number = 0; Number < 26; Number++) // storing the key into the array from the file
        {fscanf(KeyStart, "%c", &Key[Number]);}
    
    for (Number = 0; Number < 26; Number++) //making sure key is valid by adding together all the characters as ascii numbers. If valid they will add to make 2015 
        {Counter = (int)Key[Number] + Counter;}
        
    if (Counter != 2015)
        {printf("Wrong key used (double letters may be pressent)\n");
        return;}
    
    for (Number = 0; Number < 1024; Number++) //transfering message from file into array
        {fscanf(InputMessage, "%c", &Message[Number]);}

    for (Number = 0; Number < 1024; Number++) // removing invalid numbers after message
        {if (Message[Number] < 0 || Message[Number] > 126)
            {Message[Number] = 0;}
        }

    printf("Encode(1) or Decode(0)\n");
    
    do {
        scanf("%d", &Choice);
    
        if (Choice == 1) //Encryption
            {for (Number = 0; Number < 1024; Number++) 
            {Message[Number] = SubstitutionEncryption(Key, Message[Number]);}}
    
        else if (Choice == 0) //Decryption 
            {for (Number = 0; Number < 1024; Number++)   
                {Message[Number] = SubstitutionDecryption(Key, Message[Number]);}}
        else printf("Please select 1 (Encode) or 2 (Decode)\n");
    
    } while (Choice < 0 || Choice >1);//makes sure that only the number 1 or 0 is chosen

    fprintf(OutputMessage, "%s", Message);
    printf("%s\n", Message);

    return;
}

int SubstitutionEncryption(char *Key, int Letter)
{
    switch (Letter) { 
    case 65: return (int)Key[0];
    case 66: return (int)Key[1];
    case 67: return (int)Key[2];
    case 68: return (int)Key[3];
    case 69: return (int)Key[4];
    case 70: return (int)Key[5];
    case 71: return (int)Key[6];
    case 72: return (int)Key[7];
    case 73: return (int)Key[8];
    case 74: return (int)Key[9];
    case 75: return (int)Key[10];
    case 76: return (int)Key[11];
    case 77: return (int)Key[12];
    case 78: return (int)Key[13];
    case 79: return (int)Key[14];
    case 80: return (int)Key[15];
    case 81: return (int)Key[16];
    case 82: return (int)Key[17];
    case 83: return (int)Key[18];
    case 84: return (int)Key[19];
    case 85: return (int)Key[20];
    case 86: return (int)Key[21];
    case 87: return (int)Key[22];
    case 88: return (int)Key[23];
    case 89: return (int)Key[24];
    case 90: return (int)Key[25];
    default: return Letter;
}}

int SubstitutionDecryption(char *Key, int Letter)
{
    if (Letter == (int)Key[0])
        return 65;
    else if (Letter ==(int)Key[1]) 
        return 66;
    else if (Letter == (int)Key[2]) 
        return 67;
    else if (Letter == (int)Key[3]) 
	return 68;
    else if (Letter == (int)Key[4]) 
	return 69;
    else if (Letter == (int)Key[5]) 
	return 70;
    else if (Letter == (int)Key[6]) 
	return 71;
    else if (Letter == (int)Key[7]) 
	return 72;
    else if (Letter == (int)Key[8])
	return 73;
    else if (Letter == (int)Key[9]) 
	return 74;
    else if (Letter ==(int)Key[10])
	return 75;
    else if (Letter ==(int)Key[11]) 
	return 76;
    else if (Letter == (int)Key[12]) 
	return 77;
    else if (Letter == (int)Key[13]) 
	return 78;
    else if (Letter == (int)Key[14]) 
	return 79;
    else if (Letter == (int)Key[15]) 
	return 80;
    else if (Letter == (int)Key[16]) 
	return 81;
    else if (Letter == (int)Key[17]) 
	return 82;
    else if (Letter == (int)Key[18]) 
	return 83;
    else if (Letter == (int)Key[19]) 
	return 84;
    else if (Letter == (int)Key[20]) 
	return 85;
    else if (Letter == (int)Key[21]) 
	return 86;
    else if (Letter == (int)Key[22]) 
	return 87;
    else if (Letter == (int)Key[23]) 
	return 88;
    else if (Letter == (int)Key[24]) 
	return 89;
    else if (Letter == (int)Key[25]) 
	return 90;
    else return Letter;
    }




