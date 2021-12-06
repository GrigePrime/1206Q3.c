#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[99999];
    gets(sen);

    for (int i = 0;sen[i]!='\0'; i++)
    {
        if (isupper(sen[i]))
        {
            sen[i] = tolower(sen[i]);
        }
    }
    puts(sen);
}
