#include <unistd.h>

char pw_pair_impair(char *str) {
      if (str == NULL) {
        return 'N';
    }
    int count = 0;
    char *current = str;
    while (*current != '\0') {
        if ((*current >= 'A' && *current <= 'Z') || (*current >= 'a' && *current <= 'z')) {
            count++;
        }
        current++;
    }

 
    return (count % 2 == 0) ? 'P' : 'I';
}