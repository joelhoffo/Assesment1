#include<stdio.h>
 
int main()
{
	char message[26], ch;
	int k, key;
	
	printf("Enter a message to encrypt: ");
	scanf("%s",message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(k = 0; message[k] != '\0'; ++k){
		ch = message[k];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[k] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[k] = ch;
		}
	}
	
	printf("Encrypted message: %s", message);
	
	return 0;
}