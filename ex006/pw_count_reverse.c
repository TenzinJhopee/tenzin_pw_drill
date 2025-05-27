#include <unistd.h>

void pw_count_reverse(unsigned int n) {
    char newline = '\n';
    unsigned int i = n;
    
    while (1) {
        char digit = '0' + i;
        write(1, &digit, 1);
        write(1, &newline, 1);
        if (i == 0) break;
        i--;
    }
}

// int main() {
//     unsigned int n = 10; // Example value for n
//     pw_count_reverse(n); // Call the function to count down from n
//     return 0; // Return success
// }