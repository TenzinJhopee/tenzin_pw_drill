#include <unistd.h>

void pw_print_bits(void) {
    char buffer[9];
    buffer[8] = '\n';

    for (int i = 0; i < 256; ++i) {
        for (int j = 7; j >= 0; --j) {
            buffer[7 - j] = (i >> j) & 1 ? '1' : '0';
        }
        write(STDOUT_FILENO, buffer, 9);
    }
}