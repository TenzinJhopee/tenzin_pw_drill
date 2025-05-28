#include <unistd.h>

int pw_casting(float f) {

    int int_part = (int)f;
    char char_part = (char)f;
    int rounded;
    float decimal_part = f - int_part;

    if (decimal_part >= 0.5) {
        rounded = int_part + 1;
    } else {
        rounded = int_part;
    }

    return int_part + char_part + rounded;
}
