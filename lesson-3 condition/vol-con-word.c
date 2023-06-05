#include <stdio.h>
int main()
{
    char name[100];
    int vol = 0, con = 0, word = 1, i = 0;
    printf("enter the number:");
    gets(name);
    // printf("\n%s", name);
    while (name[i] != '\0')
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            vol++;
        }
        else if (name[i] == ' ')
        {
            word++;
        }
        else
        {
            con++;
        }
        i++;
    }
    printf("\n woed is voewls:%d", vol);
    printf("\n woed is consonant:%d", con);
    printf("\n woed is word:%d", word);
    return 0;
}