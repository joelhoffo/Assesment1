#include<stdio.h>
 
void DecrptUsingRotationCypher(int key)
{
    int eof = 0;
    for (int a = 0; _encryptedText[a] != 0; ++a)
    {
        eof = a;
        const char encryptedChar = _encryptedText[a];
        if (encryptedChar==' ')
        _unEncryptedText[a] = encryptedChar;
        else
        
        //if (encryptedChar >= 'a' && encryptedChar <= 'z' 
        //    || encryptedChar >= 'A' && encryptedChar <= 'Z')
        _unEncryptedText[a] = encryptedChar - key;
    }
    for (int b = eof + 1; b < 1000; b++)
        _unEncryptedText[b] = 0;

    printf("\nDecrypted message: %s", _unEncryptedText);
}
