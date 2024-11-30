// write a program to check if a student passed or failed
// marks > 30 is pass
// marks <= 30 is fail
#include <stdio.h>
int main()
{
    int mark;
    printf("enter the marks of student(0-100): ");
    scanf("%d", &mark);
    // if (mark >= 30 && mark <= 100)
    // {
    //     printf("the student is pass.\n");
    // }
    // else if (mark >= 0 && mark <= 30)
    // {
    //     printf("the student is fail.\n");
    // }
    // else
    // {
    //     printf("wrong marks");
    // }
    mark >= 30? printf("pass"): printf("fail");
    return 0;
}