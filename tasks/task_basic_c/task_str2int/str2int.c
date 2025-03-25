#include "stdio.h"
#include <assert.h>
#include "str2int.h"

int str2int(const char *str) {
    int zn = 1;
    int res = 0;

    if (*str == '-'){
        zn = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    int count = 0;
    while (*str != '\0') {
        res = res * 10 + (*str - '0');
        count += 1;
        str++;
        assert(zn == -1 && res == -2147483648 || zn == -1 && res >= 0 && count <= 9 || zn == 1 && res >= 0);
    }
    assert(count > 0);
    return res * zn;
}




