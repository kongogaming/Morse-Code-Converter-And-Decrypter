#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr, *ptr2;
    ptr = fopen("data.txt", "w");
    ptr2 = fopen("morse.txt", "w");
    char a[100];
    printf("enter the string to be converted to morse code;");
    scanf("%s", &a);
    fprintf(ptr, "%s", a);
    fclose(ptr);
    ptr = fopen("data.txt", "r");
    while (1)
    {
        int ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        else if (ch == ' ')
        {
            fprintf(ptr2, " ");
        }
        else if (ch == 'A' || ch == 'a')
        {
            fprintf(ptr2, ".- ");
        }
        else if (ch == 'B' || ch == 'b')
        {
            fprintf(ptr2, "-... ");
        }
        else if (ch == 'C' || ch == 'c')
        {
            fprintf(ptr2, "-.-. ");
        }
        else if (ch == 'D' || ch == 'd')
        {
            fprintf(ptr2, "-.. ");
        }
        else if (ch == 'E' || ch == 'e')
        {
            fprintf(ptr2, ". ");
        }
        else if (ch == 'F' || ch == 'f')
        {
            fprintf(ptr2, "..-. ");
        }
        else if (ch == 'G' || ch == 'g')
        {
            fprintf(ptr2, "--. ");
        }
        else if (ch == 'H' || ch == 'h')
        {
            fprintf(ptr2, ".... ");
        }
        else if (ch == 'I' || ch == 'i')
        {
            fprintf(ptr2, ".. ");
        }
        else if (ch == 'J' || ch == 'j')
        {
            fprintf(ptr2, ".--- ");
        }
        else if (ch == 'K' || ch == 'k')
        {
            fprintf(ptr2, "-.- ");
        }
        else if (ch == 'L' || ch == 'l')
        {
            fprintf(ptr2, ".-.. ");
        }
        else if (ch == 'M' || ch == 'm')
        {
            fprintf(ptr2, "-- ");
        }
        else if (ch == 'N' || ch == 'n')
        {
            fprintf(ptr2, "-. ");
        }
        else if (ch == 'O' || ch == 'o')
        {
            fprintf(ptr2, "--- ");
        }
        else if (ch == 'P' || ch == 'p')
        {
            fprintf(ptr2, ".--. ");
        }
        else if (ch == 'Q' || ch == 'q')
        {
            fprintf(ptr2, "--.- ");
        }
        else if (ch == 'R' || ch == 'r')
        {
            fprintf(ptr2, ".-. ");
        }
        else if (ch == 'S' || ch == 's')
        {
            fprintf(ptr2, "... ");
        }
        else if (ch == 'T' || ch == 't')
        {
            fprintf(ptr2, "- ");
        }
        else if (ch == 'U' || ch == 'u')
        {
            fprintf(ptr2, "..- ");
        }
        else if (ch == 'V' || ch == 'v')
        {
            fprintf(ptr2, "...- ");
        }
        else if (ch == 'W' || ch == 'w')
        {
            fprintf(ptr2, ".-- ");
        }
        else if (ch == 'X' || ch == 'x')
        {
            fprintf(ptr2, "-..- ");
        }
        else if (ch == 'Y' || ch == 'y')
        {
            fprintf(ptr2, "-.-- ");
        }
        else if (ch == 'Z' || ch == 'z')
        {
            fprintf(ptr2, "--.. ");
        }
        else if (ch == '1')
        {
            fprintf(ptr2, ".---- ");
        }
        else if (ch == '2')
        {
            fprintf(ptr2, "..--- ");
        }
        else if (ch == '3')
        {
            fprintf(ptr2, "...-- ");
        }
        else if (ch == '4')
        {
            fprintf(ptr2, "....- ");
        }
        else if (ch == '5')
        {
            fprintf(ptr2, "..... ");
        }
        else if (ch == '6')
        {
            fprintf(ptr2, "-.... ");
        }
        else if (ch == '7')
        {
            fprintf(ptr2, "--... ");
        }
        else if (ch == '8')
        {
            fprintf(ptr2, "---.. ");
        }
        else if (ch == '9')
        {
            fprintf(ptr2, "----. ");
        }
        else if (ch == '0')
        {
            fprintf(ptr2, "----- ");
        }
    }
    printf("morse code is stored in morse.txt file");
    

    fclose(ptr);
    fclose(ptr2);
    return 0;
}
