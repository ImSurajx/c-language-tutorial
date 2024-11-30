/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, percentage;
    printf("enter marks of maths: ");
    scanf("%d", &sub1);

    printf("enter marks of science: ");
    scanf("%d", &sub2);

    printf("enter marks of english: ");
    scanf("%d", &sub3);

    percentage = (sub1 + sub2 + sub3) / 3;
    if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        if (percentage >= 40 && percentage <= 100)
        {
            printf("the student is pass");
        }
        else if (percentage <= 33)
        {
            printf("the student is fail.");
        }
        else
        {
            printf("invalid marks.");
        }
    }

    return 0;
}