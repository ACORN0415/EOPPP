int test_func(void) {
    int v0 = 34;
    int v1 = 12;
    int v2 = 78;
    int v3 = 19;
    int v4 = 9;
    int v5 = 68;
    int v6 = 83;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v5;
    }
    v6 = v6 + v1;
    v2 = v2 * 3;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
