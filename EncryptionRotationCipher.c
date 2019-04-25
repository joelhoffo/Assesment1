int EncryptUsingRotationCypher()
{
    printf("\nYou chose Encyption using Ceaser Cipher!");
    const int key = GetKey();
    printf("\nData obtained from input.txt file");


    GetStringFromFile(_unEncryptedText, "input.txt");
    printf("\nUn-encrypted Message: %s", _unEncryptedText);
    getchar();

    int eof = 0;

    for (int a = 0; _unEncryptedText[a] != 0; ++a)
    {
        eof = a;
        const char unEncryptedChar = _unEncryptedText[a];
        if (unEncryptedChar== ' ') 
        _encryptedText[a] = unEncryptedChar;
        else
        //if (unEncryptedChar >= 'a' && unEncryptedChar <= 'z' 
        //    || unEncryptedChar >= 'A' && unEncryptedChar <= 'Z')
        _encryptedText[a] = unEncryptedChar + key;
    }
    for (int b = eof + 1; b < 1000; b++)
        _encryptedText[b] = 0;


    printf("\nEncrypted message: %s", _encryptedText);
    return key;
}
