#include <unistd.h>

int pw_count_e(char *str){
 if (!str) return 0;  
    
    int count = 0;
    while (*str) {       
        if (*str == 'e') count++;
        str++;
    }
    return count;
}

