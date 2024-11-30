//wap to find if a character entered by user is upper case or not.
#include<stdio.h>
int main(){
    char ch;
    printf("enter a character: ");
    scanf("%s",&ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("upper case alphabet\n");
    } else if (ch >= 'a' && ch <= 'z'){
        printf("lower case alphabet.\n");
    } else{
        printf("not a english alphabet");
    }
    return 0;
}