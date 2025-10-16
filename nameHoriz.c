#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printw(char w[100])
{
    int i, j, l = strlen(w), ch;
    for (i = 1; i <= 7; i++)
    {
            ch = 0;
            r :
            if(w[ch] == 'A' || w[ch] == 'a'){ 
                            for (j = 1; j <= 13; j++)
                                if ((i == 1 && j == 7) || (i == 2 && (j == 6 || j == 8)) || (i == 3 && (j == 5 || j == 9)) || (i == 4 && (j <= 10 && j >= 4)) || (i == 5 && (j == 11 || j == 3)) || (i == 6 && (j == 12 || j == 2)) || (i == 7 && (j == 13 || j == 1)))
                                    printf("*");
                                else
                                    printf(" "); 
                            printf("  "); 
                            ch++;
            } 

            if(w[ch] == 'B' || w[ch] == 'b'){ 
                            for (j = 1; j <= 11; j++)
                                if ( j == 1 || ((i == 1 || i == 7 ) && j <= 10) || ((i <= 3 || i >= 5 ) && j == 11) || (i == 4 && j <= 10))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  ");
                            ch++;
            }
            if(w[ch] == 'C' || w[ch] == 'c'){ 
                            for (j = 1; j <= 11; j++)
                                if ( j == 1 || ((i == 1 || i == 7 ) && j <= 11) )
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'D' || w[ch] == 'd'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || ((i == 1 || i == 7 ) && j <= 10) || ((i > 1 && i <  7) && j == 11))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'E' || w[ch] == 'e'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || ((i == 1 || i == 7) && j < 12) || (i == 4 && j <= 7))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'F' || w[ch] == 'f'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || (i == 1 && j < 12) || (i == 4 && j <= 7))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'G' || w[ch] == 'g'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || ((i == 1 || i == 7) && j <= 11) || (i == 4 && (j >= 6)) || (i >= 4 && (j == 11)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'H' || w[ch] == 'h'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || i == 4 || j == 11)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'I' || w[ch] == 'i'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 6 || ((i == 1 || i == 7 ) && j <= 11) )
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'J' || w[ch] == 'j'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 7 || (i == 1 && j <= 11) || (i >= 5 && j == 1 || (i == 7 && j <= 7)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'K' || w[ch] == 'k'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || (i <= 3 && j == (7 + (i - 1)*(-2)))  || (i >= 4 && j == ((-3) + (i - 1)*2)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'L' || w[ch] == 'l'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || (i == 7 && j <= 11) )
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'M' || w[ch] == 'm'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || (i <= 3 && j == (1 + (i - 1)*2)) || (i <= 3 && j == (11 + (i - 1)*(-2))) || (i == 4 && j == 6))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'N' || w[ch] == 'n'){ 
                            for (j = 1; j <= 13; j++)
                                if (j == 1 || j == 13 || j == (1 + (i-1)*2))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'O' || w[ch] == 'o'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || i == 1 || i == 7)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'P' || w[ch] == 'p'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || (i <= 4 && j == 11) || i == 1 || i == 4)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'Q' || w[ch] == 'q'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || i == 1 || (i == 7 && j <= 8) || (i >= 5 && j == -1 + (i - 1)*2))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'R' || w[ch] == 'r'){ 
                            for (j = 1; j <= 8; j++)
                                if (j == 1 || (i <= 4 && j == 8) || i == 1 || i == 4 || (i >= 5 && j == (3 + (i - 5)*2)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'S' || w[ch] == 's'){ 
                            for (j = 1; j <= 11; j++)
                                if (i == 1 || i == 4 || i == 7 || (i <= 4 && j == 1) || (i >= 4 && j == 11))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'T' || w[ch] == 't'){ 
                            for (j = 1; j <= 11; j++)
                                if (i == 1 || j == 6)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'U' || w[ch] == 'u'){ 
                            for (j = 1; j <= 11; j++)
                                if (i == 7 || j == 1 || j == 11)
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'V' || w[ch] == 'v'){ 
                            for (j = 1; j <= 13; j++)
                                if (j == i || j == (14 - i))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'W' || w[ch] == 'w'){ 
                            for (j = 1; j <= 11; j++)
                                if (j == 1 || j == 11 || (i == 6 && (j == 3 || j == 9)) || (i == 5 && (j == 4 || j == 8)) || (i == 4 && j == 6))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'X' || w[ch] == 'x'){ 
                            for (j = 1; j <= 13; j++)
                                if ((j == 1 + (i - 1)*2) || (j == 13 + (i - 1)*(-2)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'Y' || w[ch] == 'y'){ 
                            for (j = 1; j <= 13; j++)
                                if ((i <= 4 && j == 1 + (i - 1)*2) || (i <= 4 && j == 13 + (i - 1)*(-2)) || (i >= 4 && j == 7))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++; 
            }
            if(w[ch] == 'Z' || w[ch] == 'z'){ 
                            for (j = 1; j <= 13; j++)
                                if (i == 1 || i == 7  || (j == 13 + (i - 1)*(-2)))
                                    printf("*");
                                else
                                    printf(" ");
                            printf("  "); 
                            ch++;
            }
            if(w[ch] == ' '){
                printf("      ");
            ch++;
        }
        if(ch < l)
            goto r;
        printf("\n");
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