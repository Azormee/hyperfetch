#include <stdio.h>
#include "renderer.h"

#define HYPERFETCH_VERSION "0.1.0-dev"

int main(void)
{
    printf("HyperFetch %s\n", HYPERFETCH_VERSION);

    renderer_run();

    return 0;
}
