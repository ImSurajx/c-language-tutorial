// waf that prints Namaste if user is indian & Bonjour if the user is French.
#include <stdio.h>
void printNamaste();
void printBonjour();

int main()
{
    char ch;
    printf("enter i for indian or enter f for french: ");
    scanf("%s", &ch);
    if (ch == 'i')
    {
        printNamaste();
    }
    else if (ch == 'f')
    {
        printBonjour();
    }

    return 0;
}

void printNamaste()
{
    printf("Namaste\n");
}

void printBonjour()
{
    printf("Bonjour\n");
}
