void EncrptUsingSubstitutionCypher()
{
    printf("You chose Encyption using Substitution Cipher!\n");
    {
        {
            printf("\nText obtained from input.txt file\n");

            FILE* fp = fopen("input.txt", "r");
            int ch = getc(fp);
            while (ch != EOF)
            {
                /* display contents of file on screen */
                putchar(ch);

                ch = getc(fp);
            }
            getchar();

            //*creates a char string up to 1000 values and store messages prompting user to enter message
            const int h = 1000;
            char Encypted[h];
            printf("\nEnter message to be encripted:");
            scanf("%[^\n]s", Encypted);

            //allows user to enter a substitution for 26 letters of the alphabet and stores it in the value of text//
            char text[h];
            printf("Enter substitution of cipher-26 consecutive letters of the alphabet:\n");
            scanf("%s", text);

            //minus 32 to all lower case values to make them uppercase ACSSI values
            for (int h = 0; h < strlen(text); h++)
            {
                //if statement for all values in the alphabet for substitution

                if (text[h] >= 97 && text[h] <= 122)
                {
                    text[h] = text[h] - 32;
                }
                else text[h] = text[h];
            }

            for (int h = 0; h < strlen(Encypted); h++) //strlen calculates the length of the string so the value of the array h has to be less then the value stored in Encypted
            {
                //applies if statment to every letter in the message stored in Encypted

                if (Encypted[h] >= 97 && Encypted[h] <= 122)
                {
                    //turns lower case letters in message to upper case ACSSI vlaues
                    Encypted[h] = Encypted[h] - 32;
                }

                //Encrypts message stored in Encypted by substituting values inputed 
                switch (Encypted[h])
                {
                case 65: Encypted[h] = text[0];
                    break;
                case 66: Encypted[h] = text[1];
                    break;
                case 67: Encypted[h] = text[2];
                    break;
                case 68: Encypted[h] = text[3];
                    break;
                case 69: Encypted[h] = text[4];
                    break;
                case 70: Encypted[h] = text[5];
                    break;
                case 71: Encypted[h] = text[6];
                    break;
                case 72: Encypted[h] = text[7];
                    break;
                case 73: Encypted[h] = text[8];
                    break;
                case 74: Encypted[h] = text[9];
                    break;
                case 75: Encypted[h] = text[10];
                    break;
                case 76: Encypted[h] = text[11];
                    break;
                case 77: Encypted[h] = text[12];
                    break;
                case 78: Encypted[h] = text[13];
                    break;
                case 79: Encypted[h] = text[14];
                    break;
                case 80: Encypted[h] = text[15];
                    break;
                case 81: Encypted[h] = text[16];
                    break;
                case 82: Encypted[h] = text[17];
                    break;
                case 83: Encypted[h] = text[18];
                    break;
                case 84: Encypted[h] = text[19];
                    break;
                case 85: Encypted[h] = text[20];
                    break;
                case 86: Encypted[h] = text[21];
                    break;
                case 87: Encypted[h] = text[22];
                    break;
                case 88: Encypted[h] = text[23];
                    break;
                case 89: Encypted[h] = text[24];
                    break;
                case 90: Encypted[h] = text[25];
                    break;
                defalut: Encypted[h] = Encypted[h];
                }
            }

            //prints Encrypted message
            printf("%s", Encypted);
        }
    }
}

void DecrptUsingSubstitutionCypher()
{
    printf("You chose decyption using Substitution Cipher!\n");
    {
        {
            printf("\nText obtained from decryptsub.txt file\n");

            FILE* fp = fopen("decryptsub.txt", "r");
            int ch = getc(fp);
            while (ch != EOF)
            {
                /* display contents of file on screen */
                putchar(ch);

                ch = getc(fp);
            }
            getchar();
            printf("\ncopy text from file");
            //*creates a string to store message and prompts user to enter message*//
            const int j = 1000;
            char str3[j];
            printf("\nEnter message to be Encrypted:");
            scanf("%[^\n]s", str3);

            //*prompts user to enter a substitution for each letter of the alphabet and stores it*//
            char str4[j];
            printf("Enter substitution of cipher-26 consecutive letters of the alphabet:\n");
            scanf("%s", str4);

            //*if the letter substitutions entered are lower case they will be converted to upper case*//
            for (int j = 0; j < strlen(str4); j++)
            {
                //applies if statment to every substitution character

                if (str4[j] >= 65 && str4[j] <= 90)
                {
                    str4[j] = str4[j] + 32;
                }
                else str4[j] = str4[j];
            }

            for (int j = 0; j < strlen(str3); j++)
            {
                //applies if statment to every letter in the message stored in str3

                if (str3[j] >= 65 && str3[j] <= 90)
                {
                    //converts lower case letters in message to upper case
                    str3[j] = str3[j] + 32;
                }

                //*Encrypts message stored in str3 by substitution of letters*//
                switch (str3[j])
                {
                case 97: str3[j] = str4[17];
                    break;
                case 98: str3[j] = str4[20];
                    break;
                case 99: str3[j] = str4[22];
                    break;
                case 100: str3[j] = str4[25];
                    break;
                case 101: str3[j] = str4[21];
                    break;
                case 102: str3[j] = str4[24];
                    break;
                case 103: str3[j] = str4[8];
                    break;
                case 104: str3[j] = str4[9];
                    break;
                case 105: str3[j] = str4[15];
                    break;
                case 106: str3[j] = str4[0];
                    break;
                case 107: str3[j] = str4[3];
                    break;
                case 108: str3[j] = str4[11];
                    break;
                case 109: str3[j] = str4[19];
                    break;
                case 110: str3[j] = str4[5];
                    break;
                case 111: str3[j] = str4[7];
                    break;
                case 112: str3[j] = str4[16];
                    break;
                case 113: str3[j] = str4[10];
                    break;
                case 114: str3[j] = str4[12];
                    break;
                case 115: str3[j] = str4[18];
                    break;
                case 116: str3[j] = str4[2];
                    break;
                case 117: str3[j] = str4[14];
                    break;
                case 118: str3[j] = str4[1];
                    break;
                case 119: str3[j] = str4[23];
                    break;
                case 120: str3[j] = str4[6];
                    break;
                case 121: str3[j] = str4[13];
                    break;
                case 122: str3[j] = str4[4];
                    break;
                fail: str3[j] = str3[j];
                }
            }
            //*prints Encrypted message*//
            printf("%s", str3);
        }
    }
}

