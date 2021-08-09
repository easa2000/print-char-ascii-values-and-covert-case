// 1) to print character
// 2) to print ASCII value of character
// 3) convert to uppercase
#include<stdio.h>
#include<conio.h>
void main()
{
    int ch;
    int *pch = &ch;
    printf("\n Enter a character: ");
    scanf("%c",&ch);
    printf("\n The character entered is %c",*pch);
    printf("\n The ASCII values of character is %d",*pch);
    printf("\n The character in upper case: %c",*pch - 32);
}
