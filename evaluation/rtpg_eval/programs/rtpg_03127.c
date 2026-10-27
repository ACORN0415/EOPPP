int test_func(void) {
    int v0 = 46;
    int v1 = 84;
    int v2 = 75;
    int v3 = 27;
    int v4 = 50;
    int v5 = 39;
    int v6 = 88;
    int v7 = 70;
    int i;
    v4 = v4 * 4;
    v2 = 97;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v5;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
