void
EncrptUsingSubstitutionCypher ()
{
  {
    {
      printf ("\nYou chose Encryption using Substitution Cipher!\n");
      printf ("\nPut text for Encryption in input.txt\n");
      printf ("\nText obtained from input.txt\n");


      GetStringFromFile (_encryptedText, "input.txt");
      printf ("%s", _encryptedText);
      //creates a char string up to 1000 values and store messages prompting user to enter message
      const int h = 1000;
      char Encrypted[100] = "How much wood would a woodchuck chuck";

      //allows user to enter a substitution for 26 letters of the alphabet and stores it in the value of text 
      char text[h];
      printf
	("\nEnter substitution of cipher-26 consecutive letters of the alphabet:\n");
      scanf ("%s", text);

      //minus 32 to all lower case values to make them uppercase ACSSI values
      for (int h = 0; h < strlen (text); h++)
	{
	  //if statement for all values in the alphabet for substitution

	  if (text[h] >= 97 && text[h] <= 122)
	    {
	      text[h] = text[h] - 32;
	    }
	  //else 
	  //      text[h] = text[h];  
	}

      for (int h = 0; h < strlen (Encrypted); h++)
	//strlen calculates the length of the string so the value of the array h has to be less then the value stored in Encrypted
	{
	  //applies if statment to every letter in the message stored in Encrypted

	  if (Encrypted[h] >= 97 && Encrypted[h] <= 122)
	    {
	      //turns lower case letters in message to upper case ACSSI vlaues
	      Encrypted[h] = Encrypted[h] - 32;
	    }

	  //Encrypts message stored in Encrypted by substituting values inputed 
	  switch (Encrypted[h])
	    {
	    case 65:
	      Encrypted[h] = text[0];
	      break;
	    case 66:
	      Encrypted[h] = text[1];
	      break;
	    case 67:
	      Encrypted[h] = text[2];
	      break;
	    case 68:
	      Encrypted[h] = text[3];
	      break;
	    case 69:
	      Encrypted[h] = text[4];
	      break;
	    case 70:
	      Encrypted[h] = text[5];
	      break;
	    case 71:
	      Encrypted[h] = text[6];
	      break;
	    case 72:
	      Encrypted[h] = text[7];
	      break;
	    case 73:
	      Encrypted[h] = text[8];
	      break;
	    case 74:
	      Encrypted[h] = text[9];
	      break;
	    case 75:
	      Encrypted[h] = text[10];
	      break;
	    case 76:
	      Encrypted[h] = text[11];
	      break;
	    case 77:
	      Encrypted[h] = text[12];
	      break;
	    case 78:
	      Encrypted[h] = text[13];
	      break;
	    case 79:
	      Encrypted[h] = text[14];
	      break;
	    case 80:
	      Encrypted[h] = text[15];
	      break;
	    case 81:
	      Encrypted[h] = text[16];
	      break;
	    case 82:
	      Encrypted[h] = text[17];
	      break;
	    case 83:
	      Encrypted[h] = text[18];
	      break;
	    case 84:
	      Encrypted[h] = text[19];
	      break;
	    case 85:
	      Encrypted[h] = text[20];
	      break;
	    case 86:
	      Encrypted[h] = text[21];
	      break;
	    case 87:
	      Encrypted[h] = text[22];
	      break;
	    case 88:
	      Encrypted[h] = text[23];
	      break;
	    case 89:
	      Encrypted[h] = text[24];
	      break;
	    case 90:
	      Encrypted[h] = text[25];
	      break;
	      //default: Encrypted[h] = Encrypted[h];
	    }
	}

      //prints Encrypted message
      printf ("%s", Encrypted);
    }
  }
}

void
DecrptUsingSubstitutionCypher ()	//Function for Decryption
{
  {
    printf ("\nYou chose Decryption using Substitution Cipher!\n");
    printf ("\nPut value from Encrypted code in decryptnokey.txt\n");
    printf ("\nText obtained from decryptsub.txt\n");


    GetStringFromFile (_encryptedText, "decryptsub.txt");
    printf ("%s", _encryptedText);
    //creates a char string up to 1000 values and store messages prompting user to enter message
    const int j = 1000;
    char Encrypted[1000] = "IGV DXEI VGGR VGXSR Q VGGREIXEA EIXEA";

    //allows user to enter a substitution for 26 letters of the alphabet and stores it in the value of text 
    char text[j];
    printf
      ("\nEnter substitution of cipher-26 consecutive letters of the alphabet:\n");
    scanf ("%s", text);

    //plus 32 to all upper case values to make them lowercase ACSSI values
    for (int j = 0; j < strlen (text); j++)
      {
	//if statement for all values in the alphabet for substitution
	if (text[j] >= 65 && text[j] <= 90)
	  {
	    text[j] = text[j] + 32;
	  }

      }

    for (int j = 0; j < strlen (Encrypted); j++)
      //strlen calculates the length of the string so the value of the array h has to be less then the value stored in Encrypted
      {
	//applies if statment to every letter in the message stored in Encrypted

	if (Encrypted[j] >= 65 && Encrypted[j] <= 90)
	  {
	    //turns upper case letters in message to lowercase
	    Encrypted[j] = Encrypted[j] + 32;
	  }

	//Encrypts message stored in Encrypted by substituting values inputed by user
	//switch statement goes through every value and substitutes users input
	switch (Encrypted[j])
	  {
	  case 97:
	    Encrypted[j] = text[17];
	    break;
	  case 98:
	    Encrypted[j] = text[20];
	    break;
	  case 99:
	    Encrypted[j] = text[22];
	    break;
	  case 100:
	    Encrypted[j] = text[25];
	    break;
	  case 101:
	    Encrypted[j] = text[21];
	    break;
	  case 102:
	    Encrypted[j] = text[24];
	    break;
	  case 103:
	    Encrypted[j] = text[8];
	    break;
	  case 104:
	    Encrypted[j] = text[9];
	    break;
	  case 105:
	    Encrypted[j] = text[15];
	    break;
	  case 106:
	    Encrypted[j] = text[0];
	    break;
	  case 107:
	    Encrypted[j] = text[3];
	    break;
	  case 108:
	    Encrypted[j] = text[11];
	    break;
	  case 109:
	    Encrypted[j] = text[19];
	    break;
	  case 110:
	    Encrypted[j] = text[5];
	    break;
	  case 111:
	    Encrypted[j] = text[7];
	    break;
	  case 112:
	    Encrypted[j] = text[16];
	    break;
	  case 113:
	    Encrypted[j] = text[10];
	    break;
	  case 114:
	    Encrypted[j] = text[12];
	    break;
	  case 115:
	    Encrypted[j] = text[18];
	    break;
	  case 116:
	    Encrypted[j] = text[2];
	    break;
	  case 117:
	    Encrypted[j] = text[14];
	    break;
	  case 118:
	    Encrypted[j] = text[1];
	    break;
	  case 119:
	    Encrypted[j] = text[23];
	    break;
	  case 120:
	    Encrypted[j] = text[6];
	    break;
	  case 121:
	    Encrypted[j] = text[13];
	    break;
	  case 122:
	    Encrypted[j] = text[4];
	    break;
	    //default: Encrypted[j] = Encrypted[j];
	  }
      }
    //*prints Encrypted message*//
    printf ("%s", Encrypted);
  }
}
