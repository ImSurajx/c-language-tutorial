/*
wap to give grades to a student.
mark < 30 is c
30 <= mark <70 is b
70 <= mark <90 is a
90 <= mark <= 100 is a
*/

#include <stdio.h>
int main()
{
    int mark;
    printf("enter mark of student (0-100): ");
    scanf("%d", &mark);
    if (mark < 30)
    {
        printf("student got grade c\n");
    }
    else if (30 <= mark && mark < 70)
    {
        printf("student got grade b\n");
    }
    else if (70 <= mark && mark < 90)
    {
        printf("student got grade a\n");
    }
    else if (90 <= mark && mark <= 100)
    {
        printf("student got grade a+\n");
    }
    else
    {
        printf("invalid marks\n");
    }
    return 0;
}