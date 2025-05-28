#include <unistd.h>


void pw_sizeof(void) {
   char str[1];
   int size;

   size = sizeof(char);
   str[0] = size + '0';
   write(1, "char: ", 6);
   write(1, &str[0], 1);
   write(1, " octets", 7);
   write(1, "\n", 1);

   size = sizeof(short);
   str[0] = size + '0';
   write(1, "short: ", 7);
   write(1, &str[0], 1);
   write(1, " octets", 7);
   write(1, "\n", 1);

   size = sizeof(int);
   str[0] = size + '0';
   write(1, "int : ", 6);
   write(1, &str[0], 1);
   write(1, " octets", 7);
   write(1, "\n", 1);

   size = sizeof(long);
   str[0] = size + '0';
   write(1, "long: ", 6);
   write(1, &str[0], 1);
   write(1, " octets", 7);
   write(1, "\n", 1);

    size = sizeof(float);
   str[0]= size + '0';
   write(1, "float : ", 8);
   write(1, &str[0], 1);
   write(1, " octets", 7);
   write(1, "\n", 1);

   size = sizeof(double);
   str[0] = size + '0';
   write(1, "double: ", 8);
   write(1, &str[0], 1);
   write(1, " octets", 7);
   write(1, "\n", 1);
}
