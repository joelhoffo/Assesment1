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
      printf("You chose Encyption using Ceaser Cipher!\n");
    char input[26], AmountC;
	int A;
	int key;
	
	printf("Enter a message to encrypt: ");
	scanf(" %[^\n]s",input);
	printf("Enter key: ");
	scanf("%d", &key);

	for(A = 0; input[A] != '\0'; ++A){
		AmountC = input[A];

		if(AmountC >= 'a' && AmountC <= 'z'){
			AmountC = AmountC + key;

			if(AmountC > 'z'){
				AmountC = AmountC - 'z' + 'a' - 1;
			}

			input[A] = AmountC;
		}
		else if(AmountC >= 'A' && AmountC <= 'Z'){
			AmountC = AmountC + key;

			if(AmountC > 'Z'){
				AmountC = AmountC - 'Z' + 'A' - 1;
			}

			input[A] = AmountC;
		}
	}

	printf("Encrypted message: %s", input);
}
  
   else if (option==2)
   {
      printf("You chose decyption using Ceaser Cipher!\n");

	char input[100], AmountC;
	int A, key;
	
	printf("Enter a message to decrypt: ");
	scanf(" %[^\n]s",input);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(A = 0; input[A] != '\0'; ++A){
		AmountC = input[A];
		
		if( AmountC >= 'a' && AmountC <= 'z'){
			AmountC = AmountC - key;
			
			if(AmountC < 'a'){
				AmountC = AmountC + 'z' - 'a' + 1;
			}
			
			input[A] = AmountC;
		}
		else if(AmountC >= 'A' && AmountC <= 'Z'){
			AmountC = AmountC - key;
			
			if(AmountC < 'A'){
				AmountC = AmountC + 'Z' - 'A' + 1;
			}
			
			input[A] = AmountC;
		}
	}
	
	printf("Decrypted message: %s", input);
	
}
      
   else if (option==3)
   {
      printf("You chose Encyption using Substitution Cipher!\n");
   }
   else if (option==4)
   {
      printf("You chose decyption using Substitution Cipher!\n");
   }
   else 
   {
      printf("No valid Entry!\n");
   }
   return 0;
}
