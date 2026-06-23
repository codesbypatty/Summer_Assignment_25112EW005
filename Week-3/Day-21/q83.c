#include<stdio.h>

void main()
{
    char str[100];
    int i=0,vowel=0,consonant=0;

    printf("enter string : ");
    gets(str);

    while(str[i]!='\0')
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }

        i++;
    }

    printf("vowels = %d\n",vowel);
    printf("consonants = %d",consonant);
}