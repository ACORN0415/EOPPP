int test_func(void) {
    int v0 = 24;
    int v1 = 71;
    int v2 = 10;
    int v3 = 99;
    int v4 = 49;
    int v5 = 47;
    int v6 = 79;
    int i;
    v4 = v4 * 3;
    for (i = 0; i < 16; i++) {
        v6 = v6 + v1;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
