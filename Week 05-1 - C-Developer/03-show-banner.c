#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banner.h"

int main(int argc, char **argv) {
    if (argc <= 1) {
        fprintf(stderr, "Usage: %s message\n", argv[0]);
        exit(1);
    }
    char *direction = getenv("BANNER_DIRECTION");
    if (direction == NULL)
        direction = "horizontal";

    if (strcmp(direction, "vertical") == 0)
        banner_vertical(argv[1]);
    else
        banner_horizontal(argv[1]);
}

/* อย่าลืมลบ 03- ออกด้วย

Compile (Header File):
gcc -c banner.c

Compile:
gcc -c 03-show-banner.c

Merge:
gcc -o show-banner 03-show-banner.o banner.o
*/