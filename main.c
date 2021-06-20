#include <stdio.h>

int main()
{
    int      a = 0;

    char     b = 'a';

    while (b <= 'z')
    {
        printf("%c\n", b-32);
            b++;
    };
}
