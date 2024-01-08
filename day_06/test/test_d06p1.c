#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "d06.h"

    const char str[] = "\
Time:      7  15   30\n\
Distance:  9  40  200\n\
";

const size_t str_len = sizeof(str) / sizeof(char);

int main(int argc, char** argv){
    size_t ret = part1(str_len, str);
    printf("ret %ld\n", ret);
    assert(ret == 0);
    
    return EXIT_SUCCESS;
}