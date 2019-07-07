#include <stdio.h>

#define BIT_8 0x80
#define BIT_7 0x40
#define BIT_6 0x20
#define BIT_5 0x10
#define BIT_4 0x08
#define BIT_3 0x04
#define BIT_2 0x02
#define BIT_1 0x01

void    print_bit_state(unsigned char aCh)
{
    printf("%i: ", aCh);
    printf("%i", (aCh & BIT_8) ? 1 : 0);
    printf("%i", (aCh & BIT_7) ? 1 : 0);
    printf("%i", (aCh & BIT_6) ? 1 : 0);
    printf("%i ", (aCh & BIT_5) ? 1 : 0);
    printf("%i", (aCh & BIT_4) ? 1 : 0);
    printf("%i", (aCh & BIT_3) ? 1 : 0);
    printf("%i", (aCh & BIT_2) ? 1 : 0);
    printf("%i\n", (aCh & BIT_1) ? 1 : 0);
}

int     main()
{
    unsigned char a = 0b00100010;

    print_bit_state(a >> 5);
    return 0;
}