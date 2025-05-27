#include <unistd.h>

void pw_print_digits(void) {
    char digits[] = "0123456789$";
    write(STDOUT_FILENO, digits, sizeof(digits) - 1);
}

// int main() {
//     pw_print_digits();
//     return 0;
// }
