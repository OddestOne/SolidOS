#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_GREEN);
    print_str("Loaded Solid os Please wait");
}
