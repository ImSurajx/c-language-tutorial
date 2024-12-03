// write a function to calculate force of attraction on a body of mass 'm' exerted by earn. consider g = 9.8m/s^2.
#include<stdio.h>

float foa(int m);

int main() {
    int m;
    printf("Enter mass of body: ");
    scanf("%d", &m);
    float force = foa(m);
    printf("The force of attraction on a body is: %.2f\n", force);
    return 0;
}

float foa(int m) {
    float f = 9.8 * m;
    return f;
}
