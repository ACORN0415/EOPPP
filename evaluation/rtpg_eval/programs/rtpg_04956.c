int test_func(void) {
    int v0 = 34;
    int v1 = 39;
    int v2 = 2;
    int v3 = 68;
    int v4 = 42;
    int i;
    v4 = v4 * 10;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
