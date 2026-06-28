#include "libsbs.h"

int sbs_isalnum(int c) {
    return sbs_isalpha(c) || sbs_isdigit(c);
}