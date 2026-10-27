int test_func(void) {
    int v0 = 86;
    int v1 = 82;
    int v2 = 67;
    int i;
    v2 = v2 * 3;
    v2 = 77;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
