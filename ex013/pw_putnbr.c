#include <unistd.h>


void pw_putnbr(unsigned int nb) {
    if (nb >= 10) {
        pw_putnbr(nb / 10);
    }
    char c = '0' + (nb % 10);
    write(1, &c, 1);
}