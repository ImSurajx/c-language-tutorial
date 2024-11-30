#include<stdio.h>
int main(){
    //increment operator 
    // i++ (post increment)
    // ++i (pre increment)

    //decrement operator 
    // i-- (post decrement)
    // --i (pre decrement)
    int i = 1;
    printf("increment");
    printf("%d\n", i++); // use then increase
    printf("%d\n",i);

    printf("%d\n", ++i); // increase then use
    printf("%d\n",i);
    
    printf("decrement");
    printf("%d\n", i--); // use then dicrease
    printf("%d\n",i);

    printf("%d\n", --i); // dicrease then use
    printf("%d\n",i);
    return 0;
}