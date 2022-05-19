#include <stdio.h>
/* email: masnu7802@gmail.com or github: https://github.com/suman7802 */
void encryption(char *name, int b)
{
    char *ptr = name;
    while (*ptr != '\0')
    {
        *ptr = *ptr + (b+1);
        ptr++;
    }
}

void decryption(char *name, int b)
{
    char *ptr = name;
    while (*ptr != '\0')
    {
        *ptr = *ptr - (b+1);
        ptr++;
    }
}

int main()
{
    int input;
    printf("Press 1 to start/continue\nPress 0 to stop\n");
    scanf("%d", &input);
    while (input == 1)
    {
        int a;
        int b;
        char *message1 = "press 1 for encrypt text and 2 for decrypt text\n";
        printf("****************************************************\n");
        printf("Hello welcome in encryption and decryption algorithm\n");
        printf("****************************************************\n");
        printf("%s", message1);
        scanf("%d", &a);
        printf("Recommendation length for pin is (1-4)!\nEnter your pin\n");
        scanf("%d", &b);
        if (a == 1)
        {
            fflush(stdin);
            char name[100];
            printf("Enter text to encrypte\n");
            gets(name);
            encryption(name, b);
            printf("Your encrypted text is: %s\n", name);
        }
        else if (a == 2)
        {
            fflush(stdin);
            char name[100];
            printf("Enter text to decrypte\n");
            gets(name);
            decryption(name, b);
            printf("Your decrypted text is: %s\n", name);
        }
        else
        {
            printf("Error! %s", message1);
        }
        printf("Press 1 to start/continue\nPress 0 to stop\n");
        scanf("%d", &input);
        /* email: masnu7802@gmail.com or github: https://github.com/suman7802 */
    }
    return 0;
}