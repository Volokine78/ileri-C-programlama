#include <stdio.h>

int main()
{
    int size = 6;

    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            char c;
            switch (col) {
                case 1:
                case 4:
                case 6: c = 'a'; break;
                case 2: c = 'n'; break;
                case 3: c = 'k'; break;
                case 5: c = 'r'; break;
            }
            printf("%c", c);
        }
        printf("\n");
    }
    for (int row = (size - 1); row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            char c;
            switch (col) {
                case 1:
                case 4:
                case 6: c = 'a'; break;
                case 2: c = 'n'; break;
                case 3: c = 'k'; break;
                case 5: c = 'r'; break;
            }
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}