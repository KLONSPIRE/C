#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printw(char w[100])
{
    int i, j, l = strlen(w), ch;
    for (ch = 0; ch < l; ch++)
    {
        switch(w[ch])
        {
            case 'A' :
            case 'a' :
                        for(i = 1; i <= 6; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if ((i == 1 && j == 6) || (i == 2 && (j == 5 || j == 7)) || (i == 3 && (j == 4 || j == 8)) || (i == 4 && (j <= 9 && j >= 3)) || (i == 5 && (j == 10 || j == 2)) || (i == 6 && (j == 11 || j == 1)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'B' :
            case 'b' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if ( j == 1 || ((i == 1 || i == 7 ) && j <= 10) || ((i <= 3 || i >= 5 ) && j == 11) || (i == 4 && j <= 10))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'C' :
            case 'c' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if ( j == 1 || ((i == 1 || i == 6 ) && j <= 11) )
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'D' :
            case 'd' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || ((i == 1 || i == 7 ) && j <= 10) || ((i > 1 && i <  7) && j == 11))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'E' :
            case 'e' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || ((i == 1 || i == 7) && j < 12) || (i == 4 && j <= 7))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'F' :
            case 'f' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || (i == 1 && j < 12) || (i == 4 && j <= 7))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'G' :
            case 'g' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || ((i == 1 || i == 7) && j <= 11) || (i == 4 && (j >= 6)) || (i >= 4 && (j == 11)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'H' :
            case 'h' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || i == 4 || j == 11)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'I' :
            case 'i' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 6 || ((i == 1 || i == 7 ) && j <= 11) )
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'J' :
            case 'j' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 7 || (i == 1 && j <= 11) || (i >= 5 && j == 1 || (i == 7 && j <= 7)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'K' :
            case 'k' :
                        for(i = 1; i <= 6; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || (i <= 3 && j == (7 + (i - 1)*(-2)))  || (i >= 4 && j == ((-3) + (i - 1)*2)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'L' :
            case 'l' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || (i == 7 && j <= 11) )
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'M' :
            case 'm' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || (i <= 3 && j == (1 + (i - 1)*2)) || (i <= 3 && j == (11 + (i - 1)*(-2))) || (i == 4 && j == 6))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'N' :
            case 'n' :
                        for(i = 1; i <= 6; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || j == (1 + (i-1)*2))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'O' :
            case 'o' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || i == 1 || i == 7)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'P' :
            case 'p' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || (i <= 4 && j == 11) || i == 1 || i == 4)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'Q' :
            case 'q' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || i == 1 || (i == 7 && j <= 8) || (i >= 5 && j == -1 + (i - 1)*2))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'R' :
            case 'r' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 8; j++)
                                if (j == 1 || (i <= 4 && j == 8) || i == 1 || i == 4 || (i >= 5 && j == (3 + (i - 5)*2)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'S' :
            case 's' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (i == 1 || i == 4 || i == 7 || (i <= 4 && j == 1) || (i >= 4 && j == 11))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'T' :
            case 't' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (i == 1 || j == 6)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'U' :
            case 'u' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (i == 7 || j == 1 || j == 11)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'V' :
            case 'v' :
                        for(i = 1; i <= 6; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == i || j == (12 - i))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'W' :
            case 'w' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || (i == 6 && (j == 3 || j == 9)) || (i == 5 && (j == 4 || j == 8)) || (i == 4 && j == 6))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'X' :
            case 'x' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 13; j++)
                                if ((j == 1 + (i - 1)*2) || (j == 13 + (i - 1)*(-2)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'Y' :
            case 'y' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 13; j++)
                                if ((i <= 4 && j == 1 + (i - 1)*2) || (i <= 4 && j == 13 + (i - 1)*(-2)) || (i >= 4 && j == 7))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
            case 'Z' :
            case 'z' :
                        for(i = 1; i <= 7; i++)
                        {
                            for (j = 1; j <= 13; j++)
                                if (i == 1 || i == 7  || (j == 13 + (i - 1)*(-2)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("\n");
                        }
                        printf("\n");
                        break;
        }
    }
}
int main()
{
    char word[100];
    int i;
    printf("Enter Your Name : ");
    scanf("%[^\n]s", word);
    printw(word);
    return 0;
}
