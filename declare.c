#include <stdio.h>

int main() {
    
    unsigned int a = 100;
    short int b =50;
    long int c = 1000000;
    signed char d = -5;
    long double num =123456.123654;
    unsigned short int h = 65535;
    printf("Unsigned int: %u\n", a);
    printf("Short int: %hd\n", b);

    printf("Long int: %ld\n", c);
    printf("Signed char: %d\n", d);

    printf("Long double: %Lf\n",num);
    printf("Unsigned short int: %hu\n",h);

    return 0;
}
