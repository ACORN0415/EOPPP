int test_func(void) {
    int v0 = 84;
    int v1 = 81;
    int v2 = 27;
    int v3 = 74;
    int v4 = 48;
    int v5 = 99;
    int v6 = 2;
    int i;
    for (i = 0; i < 12; i++) {
        v5 = v5 + v5;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
