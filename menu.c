#include <stdio.h>   //for printf and scanf satements
int main()
{
   int option;
 
   /*Displaing on screen*/
   printf("Menu\n");
   printf("1) Encyption using Ceaser Cipher\n");
   printf("1) decyption using Ceaser Cipher\n");
   printf("2) Encyption using Substitution Cipher\n");
   printf("1) decyption using Ceaser Cipher\n");
   printf("3) \n");
 
   printf("chose option:");
   scanf("%d", &option);
 
 
   /*Finding which option was asked for (my style of using brackets may be different than yours*/
   if (option==1)
   {
      printf("You chose Ceaser Cipher!\n");
   }
   else if (option==2)
   {
      printf("You chose Sub Cipher!\n");
   }
   else if (option==3)
   {
      printf("You chose program 3!\n");
   }
 
   return 0;
}
