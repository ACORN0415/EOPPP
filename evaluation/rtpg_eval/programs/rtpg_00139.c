int test_func(void) {
    int v0 = 14;
    int v1 = 49;
    int v2 = 12;
    int v3 = 25;
    int v4 = 73;
    int v5 = 94;
    int v6 = 100;
    int v7 = 81;
    int i;
    v3 = v3 + v6;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v6;
    }
    v0 = 62;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
