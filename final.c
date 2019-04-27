#include <stdio.h>		//for printf and scanf satements
#include <string.h>
//#include <stdlib.h>  // needed for getchar and putchar for readind stdin and stdout

//Joel hoffmann 
//c3324574
//Assesment 1 Engg1003


char _encryptedText[1000];	//allowing memory for strings with up 1000 characters
char _unEncryptedText[1000];

void
GetStringFromFile (char input[26], const char *fileName)	//fuction to read txt from files 
{
  FILE *fp = fopen (fileName, "r");
  int ch = getc (fp), i = 0;
  while (ch != EOF)
    {
      input[i++] = ch;
      ch = getc (fp);
    }
  for (; i < 26; i++)
    input[i] = 0;
}

int
GetKey ()			//Function to allow user to input key
{
  int key;
  printf ("\nEnter key: ");
  scanf ("%d", &key);
  return key;
}

int
EncryptUsingRotationCypher ()
{
  printf ("\nYou chose Encryption using Rotation Cipher!");
  const int key = GetKey ();
  printf ("\nData obtained from input.txt file");


  GetStringFromFile (_unEncryptedText, "input.txt");	//reads txt from inpiut.txt file
  printf ("\nUn-encrypted Message: %s", _unEncryptedText);
  getchar ();

  int eof = 0;

  for (int a = 0; _unEncryptedText[a] != 0; ++a)	//initial 0 values , incremented 
    {
      eof = a;
      const char unEncryptedChar = _unEncryptedText[a];
      if (unEncryptedChar == ' ')	// allows for spaces in text 
	_encryptedText[a] = unEncryptedChar;
      else
	//if (unEncryptedChar >= 'a' && unEncryptedChar <= 'z' 
	//    || unEncryptedChar >= 'A' && unEncryptedChar <= 'Z')
	_encryptedText[a] = unEncryptedChar + key;	//adds key to inputed value to encrypt
    }
  for (int b = eof + 1; b < 1000; b++)	//stops all 1000 char values being assigned memory
    _encryptedText[b] = 0;


  printf ("\nEncrypted message: %s", _encryptedText);
  return key;
}

void
DecrptUsingRotationCypher (int key) //Function for decryption using key 
{
  int eof = 0;
  for (int a = 0; _encryptedText[a] != 0; ++a) //initial 0 values , incremented 
    {
      eof = a;
      const char encryptedChar = _encryptedText[a]; //array that goes through inputted a values in encrypted text
      if (encryptedChar == ' ') //allows for spaces 
	_unEncryptedText[a] = encryptedChar;
      else

	_unEncryptedText[a] = encryptedChar - key; //Encrypts tetx 
    }
  for (int b = eof + 1; b < 1000; b++) //Stops 1000 character values being assigned if empty 
    _unEncryptedText[b] = 0;

  printf ("\nDecrypted message: %s", _unEncryptedText);
}

void
DecrptUsingRotationCypher2 ()
{
  printf ("\nYou chose Decryption using Rotation Cipher!\n");
  printf ("\nPut value from Encrypted code in decrypt.txt\n");
  printf ("\nText obtained from decrypt.txt\n");


  GetStringFromFile (_encryptedText, "decrypt.txt");
  printf ("%s", _encryptedText);        //reads txt from decrypt.txt file

  const int key = GetKey ();    //takes key value from user value 
  DecrptUsingRotationCypher (key);
}

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


void
DescryptUsingRotationCipherWithNoKey ()
{
  printf ("\nYou chose Decryption using Rotation Cipher with no key!\n");
  printf ("\nPut value from Encrypted code in decryptnokey.txt\n");
  printf ("\nText obtained from decryptnokey.txt\n");


  GetStringFromFile (_encryptedText, "decryptnokey.txt");
  printf ("%s", _encryptedText);

  char input[1000] =
    "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU.";
  char AmountC;
  int A; 


  for (A = 0; input[A] != '\0'; ++A)
    {
      AmountC = input[A]; ////array that goes through inputted a values in encrypted text

      if (AmountC >= 'a' && AmountC <= 'z') //If statement that encrypts values between a and z
	{
	  AmountC = AmountC - 7; //subtracts value from encrypted cipher text
	  
	}
      else if (AmountC >= 'A' && AmountC <= 'Z')  //If statement that encrypts values between a and z
	{
	  AmountC = AmountC - 7;

	  if (AmountC < 'A') // unknown values 
	    {
	      AmountC = AmountC + 'Z' - 'A' + 1;
	    }
      input[A] = AmountC;
	}
    }

  printf ("\n\nDecrypted message: %s", input);
}

void
DecryptUsingSubstitionCipherWithNoKey ()
{
  printf ("\nYou chose Decryption using Rotation Cipher with no key!\n");
  printf ("\nPut value from Encrypted code in decryptnokeysub.txt\n");
  printf ("\nText obtained from decryptnokeysub.txt\n");


  GetStringFromFile (_encryptedText, "decryptnokeysub.txt");
  printf ("\nencrypted Message: %s", _encryptedText);
  getchar ();
  //creates a char string up to 1000 values and store messages prompting user to enter message
  //const int j = 1000;
  char decryptedText[1000];

  //allows user to enter a substitution for 26 letters of the alphabet and stores it in the value of text 
  char text[26] = {
    'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g',
      'h', 'j', 'k', 'l', 'z', 'x', 'c',
    'v', 'b', 'n', 'm'
  };


  //plus 32 to all upper case values to make them lowercase ACSSI values
  for (int j = 0; j < strlen (text); j++)
    {
      //if statement for all values in the alphabet for substitution

      if (text[j] >= 65 && text[j] <= 90)
	{
	  text[j] = text[j] + 32;
	}
      //else text[j] = text[j];
    }

  int eLen = strlen (_encryptedText);
  for (int j = 0; j < eLen; j++)
    //strlen calculates the length of the string so the value of the array h has to be less then the value stored in Encrypted
    {
      char ej = _encryptedText[j];
      //applies if statment to every letter in the message stored in Encrypted

      if (ej >= 65 && ej <= 90)
	{
	  //converts lower case letters in message to upper case
	  char dj = ej + 32;
	  ej = dj;
	}
      //        printf("%s", ej);

      //Encrypts message stored in Encrypted by substituting values inputed by user
      //switch statement goes through every value and substitutes users input
      switch (ej)
	{
	case 'a':
	  decryptedText[j] = text[17];
	  break;
	case 'b':
	  decryptedText[j] = text[2];
	  break;
	case 'c':
	  decryptedText[j] = text[7];
	  break;
	case 'd':
	  decryptedText[j] = text[16];
	  break;
	case 'e':
	  decryptedText[j] = text[6];
	  break;
	case 'f':
	  decryptedText[j] = text[4];
	  break;
	case 'g':
	  decryptedText[j] = text[22];
	  break;
	case 'h':
	  decryptedText[j] = text[15];
	  break;
	case 'i':
	  decryptedText[j] = text[9];
	  break;
	case 'j':
	  decryptedText[j] = text[11];
	  break;
	case 'k':
	  decryptedText[j] = text[24];
	  break;
	case 'l':
	  decryptedText[j] = text[21];
	  break;
	case 'm':
	  decryptedText[j] = text[13];
	  break;
	case 'n':
	  decryptedText[j] = text[10];
	  break;
	case 'o':
	  decryptedText[j] = text[25];
	  break;
	case 'p':
	  decryptedText[j] = text[1];
	  break;
	case 'q':
	  decryptedText[j] = text[14];
	  break;
	case 'r':
	  decryptedText[j] = text[12];
	  break;
	case 's':
	  decryptedText[j] = text[0];
	  break;
	case 't':
	  decryptedText[j] = text[19];
	  break;
	case 'u':
	  decryptedText[j] = text[20];
	  break;
	case 'v':
	  decryptedText[j] = text[5];
	  break;
	case 'w':
	  decryptedText[j] = text[23];
	  break;
	case 'x':
	  decryptedText[j] = text[3];
	  break;
	case 'y':
	  decryptedText[j] = text[8];
	  break;
	case 'z':
	  decryptedText[j] = text[18];
	  break;

	default:
	  decryptedText[j] = _encryptedText[j];
	}
    }
  //*prints Encrypted message*//
  printf ("\nDecrypted text: %s", decryptedText);
}

void
ShowMenu () //User friendly menu
{
  printf ("\n\nMenu\n");
  printf ("1) Encryption using Rotation Cipher\n");
  printf ("2) Decryption using Rotation Cipher\n");
  printf ("3) Encryption using Substitution Cipher\n");
  printf ("4) Decryption using Substitution Cipher\n");
  printf ("5) Decryption using Rotation Cipher with no key\n");
  printf ("6) Decryption using Substitution Cipher with no key\n");
  printf ("X) Exit\n");
}

char
GetUserOption ()
{
  printf ("\nChoose option:");
  char option = getchar ();
  //scanf("%d", option);
  return option;
}

int
main ()
{
  int exit = 1; //Exit allows loop of menu 
  do
    {
      ShowMenu ();
      const char option = GetUserOption ();

      switch (option) //Switch linked to functions dependent on user input 
	{
	case '1':
	  {
	    const int key = EncryptUsingRotationCypher ();
	    DecrptUsingRotationCypher (key);
	    break;
	  }

	case '2':
	  DecrptUsingRotationCypher2 ();
	  break;

	case '3':
	  EncrptUsingSubstitutionCypher ();
	  break;

	case '4':
	  DecrptUsingSubstitutionCypher ();
	  break;

	case '5':
	  DescryptUsingRotationCipherWithNoKey ();
	  break;

	case '6':
	  DecryptUsingSubstitionCipherWithNoKey ();
	  break;

	case 'x':
	case 'X':
	  {
	    printf ("\n\nThe End\n\n");
	    exit = 1;
	    break;
	  }

	default:
	  printf ("No valid Entry!\n");
	  break;
	}
    }
  while (exit == 0); //returns loop
  return 0;
}

