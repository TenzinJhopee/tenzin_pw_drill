#include <unistd.h>

void pw_count_to_n(unsigned int n) {
   
    // for (unsigned int i = 0; i <= n; i++) {
    //     write(1, &i, sizeof(i)); // Write the integer i to standard output
    // }

    char newline = '\n';
    for (unsigned int i = 0; i <= n; i++) {
        char digit = '0' + i;
        write(1, &digit, 1);
        write(1, &newline, 1);
    }
}

// int main() {
//     int n = 10; // Example value for n
//     pw_count_to_n(n); // Call the function to count to n
//     return 0; // Return success
// }