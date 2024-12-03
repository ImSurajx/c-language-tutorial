// wap a program to print prime number in a range.
#include<stdio.h>
int main(){
    int min, max;
    printf("enter starting value of range: ");
    scanf("%d",&min);
    printf("enter end value of range: ");
    scanf("%d",&max);
    if(min > 1){
        for (int i = min; i <= max; i++)
        {
            for (int j = 2; j < i; j++)
            {
                if (i%j!=0)
                {
                    printf("%d ",i);
                }
                
            }
            
            
        }
        
    }
    return 0;
}