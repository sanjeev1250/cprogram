#include <stdio.h>
int main()
{
    char cData;
    

    printf("\n Enter any character: ");
    scanf("%c", &cData);
   

    if((cData >= 'a' && cData <= 'z') || (cData >= 'A' && cData <= 'Z'))
    {
       
        if(cData=='a' || cData=='e' || cData=='i' || cData=='o' || cData=='u' ||
                cData=='A' || cData=='E' || cData=='I' || cData=='O' || cData=='U')
        {
            printf("\n It is an vowel.\n\n");
        }
        else
        {
            printf("\n It is a consonant.\n\n");
        }
    }
    else
    {
        printf("\n It is not an vowel nor consonant.\n\n");
    }
    return 0;
}
