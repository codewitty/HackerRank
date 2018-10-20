/*
Objective

Input Format

First, take a character,  as input. 
Then take the string,  as input. 
Lastly, take the sentence  as input.

Output Format

Print three lines of output. The first line prints the character, . 
The second line prints the string, . 
The third line prints the sentence,sen .*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char string[200];
    char welcome[200];
    
    scanf ("%c", &ch);
    scanf ("%s", &string);
    scanf("\n");
    scanf("%[^\n]%*c", &welcome);
    printf("%c\n%s\n%s", ch, string, welcome);
    return (0);
}
