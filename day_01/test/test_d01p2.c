#include <stdlib.h>
#include <assert.h> 
#include "d01.h"

int main(void){

    char str[] = "two1nine\neightwothree\nabcone2threexyz\nxtwone3four\n\
                4nineeightseven2\nzoneight234\n7pqrstsixteen";

    const size_t str_len = sizeof(str) / sizeof(char);
    long long int sum = part2(str_len, str);
    assert(sum == 281);
    return EXIT_SUCCESS;
}