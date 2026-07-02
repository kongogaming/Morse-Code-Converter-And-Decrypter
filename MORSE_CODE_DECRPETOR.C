#include <stdio.h>
#include <string.h>
int main(){
    FILE *ptr;
    ptr = fopen("morse.txt", "r");
    char ch[100];
    while (fscanf(ptr, "%99s", ch) == 1) {
    if (strcmp(ch, "/") == 0)
        printf(" ");

    else if (strcmp(ch, ".-") == 0)
        printf("A");

    else if (strcmp(ch, "-...") == 0)
        printf("B");

    else if (strcmp(ch, "-.-.") == 0)
        printf("C");

    else if (strcmp(ch, "-..") == 0)
        printf("D");

    else if (strcmp(ch, ".") == 0)
        printf("E");

    else if (strcmp(ch, "..-.") == 0)
        printf("F");

    else if (strcmp(ch, "--.") == 0)
        printf("G");

    else if (strcmp(ch, "....") == 0)
        printf("H");

    else if (strcmp(ch, "..") == 0)
        printf("I");

    else if (strcmp(ch, ".---") == 0)
        printf("J");

    else if (strcmp(ch, "-.-") == 0)
        printf("K");

    else if (strcmp(ch, ".-..") == 0)
        printf("L");

    else if (strcmp(ch, "--") == 0)
        printf("M");

    else if (strcmp(ch, "-.") == 0)
        printf("N");

    else if (strcmp(ch, "---") == 0)
        printf("O");

    else if (strcmp(ch, ".--.") == 0)
        printf("P");

    else if (strcmp(ch, "--.-") == 0)
        printf("Q");

    else if (strcmp(ch, ".-.") == 0)
        printf("R");

    else if (strcmp(ch, "...") == 0)
        printf("S");

    else if (strcmp(ch, "-") == 0)
        printf("T");

    else if (strcmp(ch, "..-") == 0)
        printf("U");

    else if (strcmp(ch, "...-") == 0)
        printf("V");

    else if (strcmp(ch, ".--") == 0)
        printf("W");

    else if (strcmp(ch, "-..-") == 0)
        printf("X");

    else if (strcmp(ch, "-.--") == 0)
        printf("Y");

    else if (strcmp(ch, "--..") == 0)
        printf("Z");

    else if (strcmp(ch, ".----") == 0)
        printf("1");

    else if (strcmp(ch, "..---") == 0)
        printf("2");

    else if (strcmp(ch, "...--") == 0)
        printf("3");

    else if (strcmp(ch, "....-") == 0)
        printf("4");

    else if (strcmp(ch, ".....") == 0)
        printf("5");

    else if (strcmp(ch, "-....") == 0)
        printf("6");

    else if (strcmp(ch, "--...") == 0)
        printf("7");

    else if (strcmp(ch, "---..") == 0)
        printf("8");

    else if (strcmp(ch, "----.") == 0)
        printf("9");

    else if (strcmp(ch, "-----") == 0)
        printf("0");

    else
        printf("?");
}

    fclose(ptr);
    return 0;
}