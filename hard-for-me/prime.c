// wap to check if a number is prime or not.
#include<stdio.h>
int main(){
    // prime number is a type of number which is divisble by 1 or itself only.
    /*
    step 1: user give a number as a input.
    step 2: check the number is greator than 1 or not else it's says not a prime number.count
    step 3: make a loop which check it's devide by another number or not
    step 4: if it divide by any other number then it's not a prime number else it is.
    */
    int num, count = 0;
    printf("enter any number: ");
    scanf("%d",&num);
    if(num > 1){
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        
    }
    if (count == 2)
    {
        printf("it's a prime number.\n");
    } else{
        printf("it's not a prime number\n");
    }
    return 0;
}