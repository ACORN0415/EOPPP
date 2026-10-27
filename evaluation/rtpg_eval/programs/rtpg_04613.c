int test_func(void) {
    int v0 = 99;
    int v1 = 77;
    int v2 = 6;
    int v3 = 12;
    int v4 = 84;
    int v5 = 76;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v2;
    }
    v1 = v1 + v0;
    int *__p = &v4;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
