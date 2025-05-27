#include <unistd.h>


void pw_reverse_alphabet(void) {
    const char *alphabet = "zyxwvutsrqponmlkjihgfedcba\n";
    write(1, alphabet, 27); // 26 letters + newline
}


// int main() {
//     pw_reverse_alphabet();
//     return 0;
// }