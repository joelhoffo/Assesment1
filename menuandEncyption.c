#include <stdio.h>   //for printf and scanf satements
int main()
{
   int option;
 
   /*Displaing on screen*/
   printf("Menu\n");
   printf("1) Encyption using Ceaser Cipher\n");
   printf("2) decyption using Ceaser Cipher\n");
   printf("3) Encyption using Substitution Cipher\n");
   printf("4) decyption using Substitution Cipher\n");
   
 
   printf("\nChoose option:"); 
   scanf("%d", &option);
 
 
   /*Finding which option was asked for (my style of using brackets may be different than yours*/
   if (option==1)
   {
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
  
   else if (option==2)
   {
      printf("You chose decyption using Ceaser Cipher!\n");
      
   }
   else if (option==3)
   {
      printf("You chose Encyption using Substitution Cipher!\n");
   }
   else if (option==4)
   {
      printf("You chose decyption using Substitution Cipher!\n");
   }
   return 0;
}
  
