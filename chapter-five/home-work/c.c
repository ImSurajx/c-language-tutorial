// write a function to print "Hot" or "Cold" depends on the temperature users enters
#include<stdio.h>
void hotcold(int n);
int main(){
    int n;
    printf("enter temprature in celcius: ");
    scanf("%d",&n);
    hotcold(n);
    return 0;
}
void hotcold(int n){
    if(n > 50){
        printf("Ohh! it's too hot.");
    } else if(n<50 && n>20){
        printf("great weather.");
    } else if (n<20)
    {
        printf("Ohh no! Bring your jacket.");
    }
    
}
