#include "main.h"
#include <stdio.h>


int main() {
    // Test the custom _printf function
    _printf("Testing character: %c\n", 'A');
    _printf("Testing string: %s\n", "Hello, World!");
    _printf("Testing literal percent: %%\n");

    return 0;
}
