#include <unistd.h>


void pw_triangle(void) {
    int line = 0;
    while (line < 3) {
        int count = 0;
        char buffer[4];

        while (count <= line) {
            buffer[count] = 'a';
            count++;
        }

        buffer[count] = '\n';

        write(1, buffer, line + 2);
        line++;
    }
}

// void pw_triangle(void) {
//     write(1, "a\n", 2);
//     write(1, "aa\n", 3);
//     write(1, "aaa\n", 4);
// }

// int main() {
//     pw_triangle();
//     return 0;
// }