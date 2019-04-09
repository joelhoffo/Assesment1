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
