void DescryptUsingRotationCipherWithNoKey()
{
     printf("\nYou chose decyption using Rotation Cipher with no key!\n");
    printf("\nPut value from Encypted code in decryptnokey.txt\n");
    printf("\nText obtained from decrypt.txt\n");


    GetStringFromFile(_encryptedText, "decryptnokey.txt");
    printf("%s",_encryptedText);
    
    char input[1000]="TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU.";
    char AmountC;
    int A, ;
	

	
	for(A = 0; input[A] != '\0'; ++A){
		AmountC = input[A];
		
		if( AmountC >= 'a' && AmountC <= 'z'){
			AmountC = AmountC - 7;
			
		}
		else if(AmountC >= 'A' && AmountC <= 'Z'){
			AmountC = AmountC - 7;
			
			if(AmountC < 'A'){
				AmountC = AmountC + 'Z' - 'A' + 1;
			}
			
			input[A] = AmountC;
		}
	}
	
	printf("\n\nDecrypted message: %s", input);

}

void DecryptUsingSubstitionCipherWithNoKey()
{
    //creates a char string up to 1000 values and store messages prompting user to enter message
    const int j = 1000;
    char Encrypted[j];
    printf("Enter message to be Encrypted:"); 
    scanf("%[^\n]s", Encrypted); //allows input from user 

    //allows user to enter a substitution for 26 letters of the alphabet and stores it in the value of text 
    char text[j];
    printf("Enter substitution of cipher 26 consecutive letters of the alphabet:\n");
    scanf("%s", text);

   //plus 32 to all upper case values to make them lowercase ACSSI values
    for (int j = 0; j < strlen(text); j++)
    {
        //if statement for all values in the alphabet for substitution

        if (text[j] >= 65 && text[j] <= 90)
        {
            text[j] = text[j] + 32;
        }
        else text[j] = text[j];
    }

    for (int j = 0; j < strlen(Encrypted); j++) //strlen calculates the length of the string so the value of the array h has to be less then the value stored in Encypted
    {
        //applies if statment to every letter in the message stored in Encrypted

        if (Encrypted[j] >= 65 && Encrypted[j] <= 90)
        {
            //converts lower case letters in message to upper case
            Encrypted[j] = Encrypted[j] + 32;
        }

        //Encrypts message stored in Encypted by substituting values inputed by user
        //switch statement goes through every value and substitutes users input
        switch (Encrypted[j])
        {
        case 97: Encrypted[j] = text[17];
            break;
        case 98: Encrypted[j] = text[20];
            break;
        case 99: Encrypted[j] = text[22];
            break;
        case 100: Encrypted[j] = text[25];
            break;
        case 101: Encrypted[j] = text[21];
            break;
        case 102: Encrypted[j] = text[24];
            break;
        case 103: Encrypted[j] = text[8];
            break;
        case 104: Encrypted[j] = text[9];
            break;
        case 105: Encrypted[j] = text[15];
            break;
        case 106: Encrypted[j] = text[0];
            break;
        case 107: Encrypted[j] = text[3];
            break;
        case 108: Encrypted[j] = text[11];
            break;
        case 109: Encrypted[j] = text[19];
            break;
        case 110: Encrypted[j] = text[5];
            break;
        case 111: Encrypted[j] = text[7];
            break;
        case 112: Encrypted[j] = text[16];
            break;
        case 113: Encrypted[j] = text[10];
            break;
        case 114: Encrypted[j] = text[12];
            break;
        case 115: Encrypted[j] = text[18];
            break;
        case 116: Encrypted[j] = text[2];
            break;
        case 117: Encrypted[j] = text[14];
            break;
        case 118: Encrypted[j] = text[1];
            break;
        case 119: Encrypted[j] = text[23];
            break;
        case 120: Encrypted[j] = text[6];
            break;
        case 121: Encrypted[j] = text[13];
            break;
        case 122: Encrypted[j] = text[4];
            break;
        Noresult: Encrypted[j] = Encrypted[j];
        }
        //*prints Encrypted message*//
        printf("%s", Encrypted);
    }
}
