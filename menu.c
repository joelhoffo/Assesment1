void ShowMenu()
{
    printf("\n\nMenu\n");
    printf("1) Encyption using Ceaser Cipher\n");
    printf("2) decyption using Ceaser Cipher\n");
    printf("3) Encyption using Substitution Cipher\n");
    printf("4) decyption using Substitution Cipher\n");
    printf("5) decyption using Rotation Cipher with no key\n");
    printf("6) decyption using Substitution Cipher with no key\n");
    printf("X) Exit\n");
}

char GetUserOption()
{
    printf("\nChoose option:");
    char option=getchar();
    //scanf("%d", option);
    return option;
}

int main()
{
    int exit = 1;
    do
    {
        ShowMenu();
        const char option = GetUserOption();

        switch (option)
        {
        case '1':
        {
            const int key = EncryptUsingRotationCypher();
            DecrptUsingRotationCypher(key);
            break;
        }

        case '2':
            DecrptUsingRotationCypher2();
            break;

        case '3':
            EncrptUsingSubstitutionCypher();
            break;

        case '4':
            DecrptUsingSubstitutionCypher();
            break;

        case '5':
            DescryptUsingRotationCipherWithNoKey();
            break;

        case '6':
            DecryptUsingSubstitionCipherWithNoKey();
            break;

        case 'x':
        case 'X':
        {
             printf("\n\nThe End\n\n");
            exit = 1;
            break;
        }

        default:
            printf("No valid Entry!\n");
            break;
        }
    } while (exit == 0);
    return 0;
}
