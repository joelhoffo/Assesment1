#include<stdio.h>
#include<ctype.h>

int main() {
 
	char *input,*encypt,*decrypt;
 
	int i,j=0,k,key,temp;
 
	printf("\nEnter the key:");
 
	scanf("%d",&key);
 
	key=key%26;
 
	printf("\nEnter message:");

	scanf(" %[^\n]s",input);
 
	for (i=0;input[i]!=NULL;i++)
 
	  input[i]=tolower(input[i]);
 
	for (i=0;input[i]!=NULL;i++) {
 
		//printf("%c ",message[i]);
 
		if(input[i]==' ')
 
		    encypt[j++]=input[i]; else {
 
			if(input[i]>=48 && input[i]<=57) {
 
				temp=input[i]+key;
 
				if(temp>57)
 
				         encypt[j++]=48+(temp-58); else
 
				         encypt[j++]=temp;
 
			} else {
 
				if(input[i]>=97 && input[i]<=123) {
 
					temp=input[i]+key;
 
					if(temp>122)
 
					             encypt[j++]=97+(temp-123); else
 
					             encypt[j++]=temp;
 
				} else
 
				              encypt[j++]=input[i];
 
			}
 
			// printf("%c ",emessage[j]);
 
		}
 
	}
 
	encypt[j]='\0';
 
	printf("\nEncrypted message is:");
 
	for (i=0;encypt[i]!=NULL;i++)
 
	  printf("%c",encypt[i]);
 
	//  printf("\n end");
 
	for (i=0,j=0;encypt[i]!=NULL;i++) {
 
		if(encypt[i]==' ')
 
		     decrypt[j++]=encypt[i]; else {
 
			if(encypt[i]>=48 && encypt[i]<=57) {
 
				temp=encypt[i]-key;
 
				if(temp<48)
 
				         decrypt[j++]=58-(48-temp); else
 
				         decrypt[j++]=temp;
 
			} else {
 
				if(encypt[i]>=97 && encypt[i]<=123) {
 
					temp=encypt[i]-key;
 
					if(temp<97)
 
					           decrypt[j++]=123-(97-temp); else
 
					           decrypt[j++]=temp;
 
				} else
 
				          decrypt[j++]=encypt[i];
 
			}
 
		}
 
	}
 
	decrypt[j]='\0';
 
	printf("\n\n\nRetrieved message is\n\n");
 
	for (i=0;decrypt[i]!=NULL;i++)
 
	  printf("%c",decrypt[i]);
 
 
	return(0);
 
}
