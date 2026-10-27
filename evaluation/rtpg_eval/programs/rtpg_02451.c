int test_func(void) {
    int v0 = 81;
    int v1 = 8;
    int v2 = 11;
    int v3 = 60;
    int v4 = 38;
    int v5 = 32;
    int v6 = 17;
    int i;
    v2 = v2 * 3;
    if (v2 > v4) { v2 = v4; }
    v2 = 52;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
